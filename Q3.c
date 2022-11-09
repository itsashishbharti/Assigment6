#include<stdio.h>
int main()
{
     int n,sum=0;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    for(int i=1;i<=n*2;i=i+2)
    {
        sum=sum+i;
    }
    printf("\n Sum Of Frist %d Odd Number=%d",n,sum);
    return 0;
}