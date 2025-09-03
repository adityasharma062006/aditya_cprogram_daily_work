#include <stdio.h>
int main()
{
    int fact=1, n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i=n;
    while(i>0)
    {
        fact = fact*i;i--;
    }
    printf("\n factorial of %d is: %d", n, fact);
    return 0;
}