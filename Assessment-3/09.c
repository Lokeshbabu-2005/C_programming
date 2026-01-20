#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your number:-");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    if(b<a)
       printf("Success");
    else
       printf("Failure");
}