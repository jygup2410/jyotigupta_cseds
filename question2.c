#include<stdio.h>
void main()
{
    int size,arr[20];
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
