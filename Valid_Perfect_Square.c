#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],i,sq,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sq=sqrt(arr[i]);
        if(arr[i]==sq*sq)
        printf("True
");
        else
        printf("False
");
        
    }
    return 0;
    
}