// #include <stdio.h>


// int main (){
//     int n;
//     printf("Enter n :");
//     scanf("%d", &n);

//      int r;
//     printf("Enter r :");
//     scanf("%d", &r);

//     int nfact = 1;
//     int rfact;
//     int nrfact;

//     for (int i = 2; i <= n; i++)
//     {
//        nfact = nfact*i;
//     }
//     for (int  i = 2; i <= r; i++)
//     {
//        rfact=rfact*i;
//     }
//     for (int i = 2; i <= n-r; i++)
//     {
//        nrfact=nrfact*i;
//     }
    
    

//     int ncr = nfact/(rfact*nrfact);
//     printf("%d" ,ncr);

//     return 0;
// }


 #include <stdio.h>
 int factorail(int x){

    int fact= 1;
    for (int i = 2; i <= x; i++)
    {
       fact = fact*i;
    }
    
 }


 int main (){
    int n;
     printf("Enter n :");
     scanf("%d", &n);

      int r;
   printf("Enter r :");
     scanf("%d", &r);

     int nfact = factorial(n);
     int rfact = factorial(r);
     int nrfact = factorail (n-r);
    

    int ncr = nfact/(rfact*nrfact);
    printf("%d" ,ncr);

    return 0;
}