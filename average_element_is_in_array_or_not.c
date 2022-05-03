#include<stdio.h>
int main()
{
    int n,arr[100],i,j,avg,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    
    
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            printf("True");
            return 0;
        }
        
    }
    printf("False");
    
}