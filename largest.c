#include<stdio.h>
int main(){
    int i,num,larg;
    printf("enter number 1:");
    scanf("%d",&larg);
    for(i=2;i<=10;i++){
        printf("enter a number %d :",i);
        scanf("%d",&num);
        larg=(num>larg)?num:larg;
    }
    printf("the largest number is %d",larg);
    
}