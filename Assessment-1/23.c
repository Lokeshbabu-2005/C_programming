#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a-(((a%10)+(a/10))%2)*5;
    printf("%d",b);
}