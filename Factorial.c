#include <stdio.h>
int main()
{
    int i=1, fact=1, number;
    printf("Enter a number:");
    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        fact = fact*i;
    }
    printf("factorial of %d is: %d", number, fact);
    return 0;
}