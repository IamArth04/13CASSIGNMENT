#include<stdio.h>
int fact(int);
int main()
{
    int k,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    k=fact(a);
    printf("Factorial of number is %d",k);
}
int fact(int n)
{
    int s;
    if((n==0)||(n==1))         
       return (1);              
    s= n*fact(n-1);
    return (s);
}
