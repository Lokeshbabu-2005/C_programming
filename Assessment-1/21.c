#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    b=a-(a%2)*5;
    printf("%d",b);   
}