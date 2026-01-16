#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a/100;
    a=a%10;
    printf("%d%d%d",b,0,a);
}