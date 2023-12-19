#include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("enter a number :");
    scanf("%d",&n);
    if (n==0||n==1){
        printf("entered number is neither prime not composite");
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
         }
         if(flag==0){
                printf("%d is a prime number",n);
            }
            else{
                printf("%d is composite number",n);
            }
    }
}