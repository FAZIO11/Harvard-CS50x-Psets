#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    int count = strlen(message);

    for (int i = 0 ; i < count ; i++)
    {
        int array[8] ;
        for (int a = 0 ; a < BITS_IN_BYTE - 1 ; a++)
        {
            if (message[i] > 0)
            {
                if (message[i] % 2 == 0)
                {
                    array[a] = 0 ;
                }
                else if (message[i] % 2 == 1)
                {
                    array[a] = 1 ;
                }
                message[i] = message[i] / 2;
            }
            else if (message[i] >= 0)
            {
                array[a] = 0 ;
            }

        }
        for (int k = 7 ; k >= 0  ; k--)
        {
            print_bulb(array[k]);
        }
        printf("\n");
    }


}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
