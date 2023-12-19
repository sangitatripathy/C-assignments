#include<stdio.h>
int main(){
    int i,n,rem,arm=0,num;
    printf("enter a number :");
    scanf("%d",&n);
    num=n;
    while(n!=0){
      rem=n%10;
      arm=(rem*rem*rem)+arm;
      n=n/10;
    }
    if(num==arm){
        printf("entered number is a armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
}
