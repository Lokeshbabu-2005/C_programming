#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the four digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    printf("The output is : %d%d%d",a,b,c);
}