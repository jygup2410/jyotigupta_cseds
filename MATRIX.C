#include<stdio.h>
int main()
{
 int i,j,m,n,p,q;
 int a[100][100],b[100][100],c[100][100];
 printf("Enter the order of matrix A");
 scanf("%d%d",&m,&n);
 printf("Enter the order of matrix B");
 scanf("%d%d",&p,&q);
 if(m==p&&n==q)
 {
 printf("Enter elements of matrix A\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("Enter elements of matrix B\n");
 for(i=0;i<p;i++)
 {
 for(j=0;j<q;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 }
 }
 printf("Sum of the matrix\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 printf("%d ",c[i][j]);
 }
 printf("\n");
 }
 }
 else
 printf("addition not possible");
 printf("\n Jyoti Gupta CSDS B");
}

