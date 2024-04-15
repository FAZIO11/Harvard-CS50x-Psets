#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get input Height.(Repeat if input is less than 1 or more than 8 or not an number)
    int height ;
   do
   {
     height = get_int("Height: ");
    }
   while(height < 1 || height > 8);

    //Loop for height
   for(int row = 1 ; row <= height ;row++)
   {
    //Loop for the blank space
    for (int empty =0 ; empty <= height - row - 1 ; empty++)
    {
            printf(" ");
    }
     //Loop for the #
    for(int column = 1 ; column <= row ;column++)
    {
        printf("#");
    }

    printf("\n");
   }
}