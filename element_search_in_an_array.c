#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(arr[i]==j)
        {
            printf("True");
            return 0;
        }
        
    }
    printf("False");
    
}