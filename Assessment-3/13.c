#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter your number:-");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    if(b==c)
       printf("Success");
    else
       printf("Failure");
}