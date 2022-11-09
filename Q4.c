#include<stdio.h>
int main()
{
     int n,sum=0;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("\n Sum Of Frist Squares %d Natural Number=%d",n,sum);
    return 0;
}