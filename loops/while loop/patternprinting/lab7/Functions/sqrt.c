#include <stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d" ,&a);

    printf("The square root is :");
    int root = sqrt(a);//pow(2,5) is also
    printf("The square root is : %d", root);

    return 0;
}