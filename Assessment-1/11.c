#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a+b;
    printf("%d",c);
}