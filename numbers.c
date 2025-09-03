// wap to accept two no form user and display the square of even and cube of odd

#include <stdio.h>
int main()
{
    int i, a, b;
    printf("enter a integer ");
    scanf("%d", &a);
    printf("enter a integer ");
    scanf("%d", &b);
    for(i = a ; i<=b ; i++)
    if(i % 2 == 0)
    {
        printf("the square of the %d = %d",i ,i*i);
    }
    else
    {
        printf("the cube of the %d = %d",i, i*i*i);
    }
    
}