#include<stdio.h>
void main()
{
    int a[10],i,n,max;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    max=a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("maximum element:%d",max);
}
