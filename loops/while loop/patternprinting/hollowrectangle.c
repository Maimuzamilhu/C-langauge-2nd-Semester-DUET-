# include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if((i>=2 && i<=n-1) && (j>=2 && j<=n+2-1)){
                printf("  ");      //idhar double space hai because else wale block ke printf me mene * ke bad space diya hai
            }
            else{
                printf("* ");
            } 
            
        }
        printf("\n");
}
return 0;
}