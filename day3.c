#include<stdio.h>
void main()
{
    int n,i,fact=1,sum=0;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            fact=fact*i;
            sum=sum+fact;
    }
    printf("the series is %d",sum);
}
