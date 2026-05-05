#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter first number:\n");
    scanf("%d", &a);
    
    printf("Enter second number:\n");
    scanf("%d", &b);

    if(a > b)
    {
        printf("A is greatest\n");
    }
    else if(a < b)
    {
        printf("B is greatest\n");
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
