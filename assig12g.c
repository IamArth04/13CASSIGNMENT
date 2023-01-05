/*#include<stdio.h>
int hcf(int , int);
int main()
{
    int k,a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    k=hcf(a,b);
    printf("HCF of two number is %d",k);
}
int hcf(int x, int y)
{
    int s;
    if(y!=0)         
       return hcf(y,x%y);              
    return x;
}*/

#include<stdio.h>
int gcd(int , int);
int main()
{
    int k,a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    k=gcd(a,b);
    printf("gcd of two number is %d",k);
}
int gcd(int x, int y)
{
    if(x==y)         
       return (x);              
    if(x%y==0)
       return (y);
    if(y%x==0)
       return (x);
    if(x>y)
       return(gcd(x%y,y));
    else
       return(gcd(x,y%x));
}
