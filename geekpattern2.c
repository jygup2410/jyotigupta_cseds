#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    char str[10];
    str[0]='1';
    str[1]='11';
    for(int i=2;i<n;i++)
    {
        char pre[]=str[i-1];
        char temp[]=' ';
        for(int j=0;j<strlen(pre);j++)
        {
            int count=1;
            while(j<1&&pre[j]==pre[j+1])
            {
                count++;
                j++;
            }
            temp=char(count)+pre(j);
        }
        str[i]=temp[];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",str[i]);
    }
}
