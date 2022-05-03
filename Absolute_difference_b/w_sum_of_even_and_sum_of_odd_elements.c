#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i=0,sum=0,d,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
            
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum1+=arr[i];
            
        }
    }
    d=sum1-sum;
    printf("%d",abs (d));
    return 0;
}