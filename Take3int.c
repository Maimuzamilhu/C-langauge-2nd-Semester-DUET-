#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter Your First Number:");
    scanf("%d", &a);

    printf("Enter Your Second Number:");
    scanf("%d", &b);

    printf("Enter Your Third Number:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("First number is greater");
    }
    if (b > a && b > c)
    {
        printf("Second number is greater");
    }
    else
    {
        printf("Third is greater");
    }

    return 0;
}