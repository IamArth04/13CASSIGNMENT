#include<stdio.h>
int count(int);
int main()
{
    int k,a;
    printf("Enter a digit: ");
    scanf("%d",&a);
    k=count(a);
    printf("Digits in given number is %d",k);
}
int count(int n)
{
    int s;
    if(n<10)
         return (1);
    s=1+count(n/10);
         return (s);
}
