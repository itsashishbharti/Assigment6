#include<stdio.h>
int main()
{
    int a,r,sum=0,g;
    printf("Enter Your Number=");
    scanf("%d",&a);
    g=a;
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    printf("\n Reverse Of %d Number=%d",a,sum);
    return 0;
}