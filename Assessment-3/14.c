#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your number:-");
    scanf("%d",&a);
    b=a%100;
    a=a/100;
    if(a==b)
       printf("Success");
    else
       printf("Failure");
}