#include<stdio.h>
#include<math.h>
int main()
{
    int sq,n,i;
    scanf("%d",&n);
    sq=sqrt(n);
    i=sq*sq;
    if(i==n)
    printf("True");
    else
    printf("False");
}