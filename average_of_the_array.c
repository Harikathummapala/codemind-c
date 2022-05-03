#include<stdio.h>
int main()
{
    int i,arr[100];
    float avg,sum=0,n;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        
    }
    avg=sum/n;
    printf("%.2f",avg);
}