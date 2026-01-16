#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the four digit number:");
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    d=c%10;
    a=c/10;
    printf("%d%d%d",d,a,b);
}