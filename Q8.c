#include<stdio.h>
int main()
{
    int n,c=0;
    printf("ENter Your Number=");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
        else{
            c=0;
        }
    }
    if(c==0)
    {
        printf("\n Number Is Prime=%d",n);
    }
    else
    {
        printf("\n Number Is  Not Prime=%d",n);
    }
    return 0;
}