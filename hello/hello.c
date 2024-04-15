#include <stdio.h>
#include<cs50.h>

int main(void)
{
    //ask user for the input
    string name = get_string("Name: ");
    //print the hello
    printf("hello, %s\n", name);
}