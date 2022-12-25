#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,fact=1;
    float sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=(fact*i)/i;
        sum=sum+fact;
    }
    printf("the sum is%f",sum);
}
