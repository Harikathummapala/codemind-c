#include<stdio.h>
int main()
{
    int i,j,n,x[20],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    
    for(i=0;i<n;i++)
    { count=0;
        for(j=0;j<n;j++)
        {
            if(x[i]>x[j] && i!=j)
            count++;
        }
        printf("%d ",count);
    }
    return 0;
}