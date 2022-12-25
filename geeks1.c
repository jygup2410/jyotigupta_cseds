#include<stdio.h>
void main()
{
    int i,j,n,t,k,a;
    printf("enter your choice");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("enter the no");
        scanf("%d",&t);
        k=0;
        for(i=1;i<=t;i++)
        {
            a=k;
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            for(j=1;j<i;j++)
            {
                printf("%d",a);
                a--;
            }
            printf("\n");
            k++;
      }

    }

}
