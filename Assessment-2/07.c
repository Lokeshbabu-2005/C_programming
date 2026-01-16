#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    printf("%d",a==b);
}