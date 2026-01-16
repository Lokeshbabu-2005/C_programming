#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the number: ");
    scanf("%d",&a);
    a=a-((a%10)*(a/100)%2)*5;
    printf("%d",a);
}