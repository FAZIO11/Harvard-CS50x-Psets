#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name ;
    string number;
}
person;


int main (void)
{
    person people[2];

    people[0].name = "Fazil";
    people[0].number= "9995206821";

    people[1].name = "Messi";
    people[1].number = "8301081821";

    string name = get_string("YOUR NAME: ");

    for(int i=0; i< 2; i++)
    {
        if(strcmp(people[i].name,name)==0)
        {
            printf("found %s \n",people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}