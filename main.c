#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int main()
{
    char name[]="";
    int age;
    int party;
    int state;

//Receiving user details
    printf("Welcome! Please input your information as required below\n");
    printf("Name: ");
    scanf("%s", &name);
    printf("Welcome %s!\nPlease input your age: ", name);
    scanf("%d", &age);

 //displaying voting parties
    if (age >18)
    {
        printf("You are eligible to Vote\n\n");

        int select1 = presidential(party);
        int select2 = state1(state);
        //voteCasted(select1, select2);

    }
    else
        printf("\nYou are too young to vote.\nCome back when you are above 18\n");
    return 0;
}

