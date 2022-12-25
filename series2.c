#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,n;
    float sum=0;
    printf("enter the value for x");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i+4)
    {
        sum=sum+pow(x,i)/i;
    }
    for(i=3;i<=n;i+4)
    {
        sum=sum-pow(x,i)/i;
    }
    printf("the sum is %f",sum);
}
