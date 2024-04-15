#include<stdio.h>
#include<cs50.h>
int main()
{
  char *s = get_string("S=");
  char *t = get_string("t=");

if (*s == *t)
{
    printf("same\n");
    printf("%p\n", s);
    printf("%p\n", t);
}
else
{
    printf("not");
}

}