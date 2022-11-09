#include<stdio.h>
int main()
{
     int n,c=0;
    printf("Enter Your N Number=");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("Total digit in entered number=%d",c);
    return 0;
}