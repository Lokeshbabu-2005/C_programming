//print 10th place from 3 digit number.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("The output is : %d",c);
}