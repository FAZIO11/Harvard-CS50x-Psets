#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key;

    for (int p = 0 ; p< 26 ; p++)
        {
        for (int q = 1 ; q < 25 ; q++)
        {

        if (argc == 2 && strlen(argv[1]) == 26 &&  isalpha(argv[1][p]) != 0) //&& argv[1][p] != argv[1][q] )
            {

                key = (argv[1]);

            }
            else
            {
                printf("Usage: ./substitution key\n");
                return 1 ;
            }
        }
    }




    for (int c = 0; c <= strlen(key) ; c++)
    {
        key[c] = toupper(key[c]);

    }

    string plain = get_string("plaintext:  ");
    int length = strlen(plain);
    int total = 90;

    printf("ciphertext: ");

    for (int a = 0; a < length; a++)
    {
        if (plain[a] >= 65  && plain[a] <= 122)
        {
            for (int alph = 65; alph <= total; alph++)
            {

                if (plain[a] == alph)
                {

                    printf("%c", key[alph - 65]);

                }
                else if (plain[a] == alph + 32)
                {

                    printf("%c", tolower(key[alph - 65]));

                }


            }
        }

        else
        {
            printf("%c",plain[a]);
         }
    }
   printf("\n");
}

