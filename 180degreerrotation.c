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
    int temp;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][n-j-1];
            a[i][n-j-1]=temp;
        }
    }
    int t;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m/2;i++)
        {
           t=a[i][j];
           a[i][j]=a[m-i-1][j];
           a[m-i-1][j]=t;
        }
    }
    printf("the matrix after 180 degree rotation");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
