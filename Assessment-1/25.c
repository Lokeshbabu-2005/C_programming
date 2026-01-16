#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    b=((a%10)+((a/10)%10)+((a/100)%10));
    printf("%d",b<10);
    c=(b%10)+(b/10);
    printf("%d",c<10);
    d=(c%10)+(c/10);
    printf("%d",c<10);
    a=(d%10)+(d/10);
    printf("%d",a);
}