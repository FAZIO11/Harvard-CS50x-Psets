#include <cs50.h>
#include <stdio.h>

int check_length(long numb);
int main(void)
{
    long num = get_long("Number: ");
    printf("%i\n", check_length(num));



for(int i = 0 ; i <=check_length(num)+1 ; i++)
{
   num = num/10;
   //printf("%li\n",num%10) ;
   if(i%2 == 0)
   {
    printf("%li\n", num%10 * 2);
   }
   else
   {
    //printf("%li\n", num%10 * 1);
   }
}
}








int check_length(long numb)
{
   int len;
   for(len =0 ; numb  > 0 ; len++ )
   {
     numb= numb/10 ;
   }

   return len ;

}
