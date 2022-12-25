#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,x,sum=1,fact=1,f;
    printf("enter the no and terms");
    scanf("%d%d",&x,&j);
    for(i=1;i<j;i++)
    {
        fact=fact*i;
        f=pow(x,i)/fact;
        sum=sum+f;
    }
    printf("the series is %d",sum);
}
