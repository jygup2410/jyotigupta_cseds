#include<stdio.h>
void main()
{
    int a[50][50],m,n;
    printf("enter the size of matrix");
    scanf("%d%d",&m,&n);
    printf("enter the elements of matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sumd=0;
    printf("the matrix is");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            if(i==j)
            {
                sumd=sumd+a[i][j];
            }
        }
        printf("\n");
    }
    int c=0;
    for(int i=0;i<m;i++)
    {
        int sumr=0,sumc=0;
        for(int j=0;j<n;j++)
        {
            sumr=sumr+a[i][j];
            sumc=sumc+a[j][i];
        }
        if(sumr==sumc&&sumr==sumd&&sumc==sumd)
        {
            c++;
        }
    }
    if(c==m)
    {
        printf("it is a magic matrix");
    }
    else
        printf("it is not a magic matrix");
}
