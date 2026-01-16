#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=a%10;
    f=b/10;
    e=c%10;
    g=c/10;
    printf("%d",(b==d)&&(e!=c));
}