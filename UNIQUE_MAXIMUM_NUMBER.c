#include<stdio.h>
int main()
{
    int n,i,j,c,max=0,k=0;
    
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(x[i]==x[j] && i!=j)
            c++;
            
        }
        if(c==1)
        {
            k++;
            if(x[i]>max)
            {
                max=x[i];
            }
            
            
        }
        
    }
    if(k>0)
    printf("%d",max);
    else
    printf("-1");
    
}