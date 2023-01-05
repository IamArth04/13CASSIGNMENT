#include<stdio.h>
int fib(int);
int main()
{
    int k,a,i;
    printf("Enter a term of fibonacci series: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("%d ",fib(i));
    }
}
int fib(int x)
{
    int s;
    if(x==1||x==2)         
       return (1); 
    s=(fib(x-1)+fib(x-2));             
    return (s);
}
