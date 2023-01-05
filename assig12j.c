#include<stdio.h>
int power(int,int);
int main()
{
    int k,a,b;
    printf("Enter base value: ");
    scanf("%d",&a);
    printf("Enter power value: ");
    scanf("%d",&b);
    k=power(a,b);
    printf("Value of number is %d",k);
}
int power(int x, int y)
{
    int s;
    if(y==1)         
       return (x);              
    s= (x*power(x,y-1));
    return (s);
}
