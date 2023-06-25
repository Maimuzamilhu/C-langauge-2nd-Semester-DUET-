#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter Your First Side:");
    scanf("%d", &a);

    printf("Enter Your Second Side:");
    scanf("%d", &b);

    printf("Enter Your Third Side:");
    scanf("%d", &c);

    if (a+b>c && b+c>a && c+a>b)
    {
       printf("Valid triangle");
    }
    else 
    {
       printf("InValid triangle");
    }
    

return 0;
}