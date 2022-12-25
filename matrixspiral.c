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
    int top=0,bottom=m-1,left=0,right=n-1;
    while(top<=bottom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
                printf("%d,",a[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            printf("%d,",a[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d,",a[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                printf("%d,",a[i][left]);
            }
            left++;
        }
    }
}
