#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

int check_letter(string text);
int check_words(string text);
int check_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");

    float averl = (float)check_letter(text) / check_words(text) * 100;
    float avers = (float)check_sentences(text) / check_words(text) * 100;
    float index = 0.0588 * averl - 0.296 * avers - 15.8 ;

    if (round(index) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (round(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.f\n", round(index));
    }

}

int check_letter(string text)
{
    int letter ;

    for (int i = 0 ; i < strlen(text); i++)
    {
        if (text[i] >= 97 && text[i] <= 122)
        {
            letter = letter + 1 ;
        }
        else if (text[i] >= 65 && text[i] <= 90)
        {
            letter = letter + 1;
        }
    }

    return letter ;
}

int check_words(string text)
{
    int words = 1  ;
    for (int i = 0 ; i  < strlen(text) ; i++)
    {
        if (text[i] == 32)
        {
            words = words + 1;
        }

    }

    return words ;
}

int check_sentences(string text)
{
    int senten = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] ==  46 || text[i] == 33 || text[i] == 63)
        {
            senten = senten + 1 ;
        }
    }
    return senten ;
}
