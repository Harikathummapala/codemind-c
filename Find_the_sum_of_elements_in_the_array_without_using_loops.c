#include<stdio.h>
int main()
{
    int n,i,marks[n],total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        total=total+marks[i];
    }
    printf("%d",total);
}