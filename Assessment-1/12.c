//printing sum of the digits from three digit number.
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a+b+c;
    printf("The output:%d",d);
}