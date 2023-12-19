#include<stdio.h>
int main(){
    int sum=0,i,m,n;
    printf("enter a number");
    scanf("%d",&m); 
    printf("enter a number");
    scanf("%d",&n); 
    for (i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}