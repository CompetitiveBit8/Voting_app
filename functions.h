#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int presidential(int party)
{
    printf("This is the first part - The Presidential election\n");
        printf("The following are parties to vote for. \n");
        printf( "\t1 -- APC\n"
                "\t2 -- PDP\n"
                "\t3 -- LP\n"
                "\t4 -- AP\n"
                "\t5 -- A\n"
                "\t6 -- AC\n");

        printf("Select corresponding number for the party of your choice: ");
        scanf("%d", &party);

        if (party == 1)
        {
            printf("Your party of choice for presidency is APC");
        }
        else if (party == 2)
        {
            printf("Your party of choice for presidency is PDP");
        }
        else if (party == 3)
        {
            printf("Your party of choice for presidency is LP");
        }
        else if (party == 4)
        {
            printf("Your party of choice for presidency is AP");
        }
        else if (party == 5)
        {
            printf("Your party of choice for presidency is A");
        }
        else if (party == 6)
        {
            printf("Your party of choice for presidency is AC");
        }
        printf("\n\n");

        return party;
}

int state1(int state)
{

    printf("This is the second part - The Gubernitorial election\n");
        printf("The following are parties to vote for. \n");
        printf( "\t1 -- APC\n"
                "\t2 -- PDP\n"
                "\t3 -- LP\n"
                "\t4 -- AP\n"
                "\t5 -- A\n"
                "\t6 -- AC\n");

        printf("Select corresponding number for the Party of your choice: ");
        scanf("%d", &state);

        if (state == 1)
        {
            printf("Your party of choice for Governorship is APC");
        }
        else if (state == 2)
        {
            printf("Your party of choice for Governorship is PDP");
        }
        else if (state == 3)
        {
            printf("Your party of choice for Governorship is LP");
        }
        else if (state == 4)
        {
            printf("Your party of choice for Governorship is AP");
        }
        else if (state == 5)
        {
            printf("Your party of choice for Governorship is A");
        }
        else if (state == 6)
        {
            printf("Your party of choice for Governorship is AC");
        }
        printf("\n");

        return state;
}

/*
void voteCasted(int select1, int select2)
{
    char President[5];
    char Governor[5];

    if (select1 == 1)
        President = "APC";
    if (select1 == 2)
        President = "PDP";
    if (select1 == 3)
        President = "LP";
    if (select1 == 4)
        President = "AP";
    if (select1 == 5)
        President = "A";
    if (select1 == 6)
        President = "AC";


    if (select2 == 1)
        Governor = "APC";
    if (select2 == 2)
        Governor = "PDP";
    if (select2 == 3)
        Governor = "LP";
    if (select2 == 4)
        Governor = "AP";
    if (select2 == 5)
        Governor = "A";
    if (select2 == 6)
        Governor = "AC";
    printf("Votes casted are %s and %s", President, Governor);
}
*/



#endif // FUNCTIONS_H_INCLUDED
