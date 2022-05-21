#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,d;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    d=p%m;
    printf("%d",d);
}