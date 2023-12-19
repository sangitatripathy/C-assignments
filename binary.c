#include<stdio.h>
int main(){
    int dn=0,bn,rem,base=1;
    printf("enter the binary number:");
    scanf("%d",&bn);
    while(bn!=0){
        rem=bn%10;
        dn=dn+rem*base;
        bn=bn/10;
        base=base*2;
    }
    printf("the decimal number is %d",dn);
}