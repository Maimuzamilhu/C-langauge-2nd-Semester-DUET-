#include <stdio.h>

int main (){
    int n;
    printf("Enter a Number ");
    scanf("%d" , &n);

    int sum = 0;
    for (int i=1 ;i<=n; i++)
    {
      if (i%2!=0) 
      sum = sum +i;
      if (i%2==0)
      sum = sum -1;
     
      
      
    }
    printf("The sum is : %d" , sum); 
    return 0;
}