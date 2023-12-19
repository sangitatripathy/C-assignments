#include<stdio.h>
int main(){
    int n,rem,bn=0,base=1;
    printf("enter a decimal number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%2;
        bn=bn+rem*base;
        n=n/2;
        base=base*10;
        }
        printf("the binary number is :%d ",bn);
}