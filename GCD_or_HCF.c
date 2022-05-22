#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i>0;i--)
    {
        if(a%i==0 and b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}