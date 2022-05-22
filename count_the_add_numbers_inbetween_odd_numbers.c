#include<stdio.h>
int main()
{
    int n,i,c=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}