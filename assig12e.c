#include<stdio.h>
int sum(int);
int main()
{
    int k,a;
    printf("Enter a digit: ");
    scanf("%d",&a);
    k=sum(a);
    printf("Sum of digit is %d",k);
}
int sum(int n)
{
    int s;
    if(n==0)          //if(n/10==0)
       return (0);               //return (n);
    s= (n%10+sum(n/10));
    return (s);
}
