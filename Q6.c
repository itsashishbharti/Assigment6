#include<stdio.h>
int main()
{
     int n,f=1;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\n Factorial of %d=%d",n,f);
    return 0;
}