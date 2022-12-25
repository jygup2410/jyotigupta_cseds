#include<stdio.h>
void main()
{
    int t,n,routes[20];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int p=1;
        scanf("%d",&n);
        for(int j=0;j<n-1;j++)
        {
            scanf("%d",&routes[j]);
            p=p*routes[j];
        }
        p=p%1234567;
        printf("%d",p);
    }
}
