#include<stdio.h>
int main(){
    int i,n,rem,rev=0,num;
    printf("enter a number :");
    scanf("%d",&n);
    num=n;
    while(n!=0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    if(num==rev){
        printf("entered number is a pallindrome numebr");
    }
    else{
        printf("not a pallindrome number");
    }
    
}