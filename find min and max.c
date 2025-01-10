#include<stdio.h>
void main()
{
    int a[10],n,i,max,min;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        printf("maximum elements:%d",max);
    }
    min=a[0];
    if(a[i]<min)
    {
        min=a[i];
    }
    printf("min elements:%d",min);
}
