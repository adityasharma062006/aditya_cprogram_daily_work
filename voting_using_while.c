#include <stdio.h>

void main()
{
    int vote;
    int X = 0, Y = 0, Z = 0 , l;
    printf("enter 1 for vote for X/n enter 2 for vote for Y/n enter 3 for vote for Z/n ");
    scanf("%d", &vote);
    switch (vote)
    {
    case 1:
        X = X + 1;
        printf("vote for candidate X");
        break;
    case 2:
        Y = Y + 1;
        printf("vote for candidate Y");
        break;
    case 3:
        Z = Z + 1;
        printf("vote for candidate Z");
        break;
        default:
    }
    printf("wrong choice");
    {
    printf("do you wanna enter more values(y/n)");
    scanf(" %c",& l);
    while(l=='y'||l=='y')
    {printf("enter your vote");
    scanf("%d", &vote);
    printf("your choice is %d",vote);}
    {printf("thanks for voting!");}
    }
}    
