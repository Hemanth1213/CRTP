#include<stdio.h>
int main()
{
    int a[10],n,i,s=0;
    printf("enter the element size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
            s=s+a[i];
        
    }
    printf("sum of elements:%d",s);
    }
