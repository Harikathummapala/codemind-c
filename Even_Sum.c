#include<stdio.h>
#include<math.h>
int main()
{
    int N,arr[100],sum=0,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}