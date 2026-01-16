//Reverse of the two digit number.
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the two-digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    printf("The output is :%d%d",b,a);
}