#include<stdio.h>
int main()
{
    int n,arr[200],i,j,s,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                s++;
            }
        }
        if(s==1)
        {
            printf("%d ",arr[i]);
            k=1;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}
