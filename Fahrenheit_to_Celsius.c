#include<stdio.h>
int main()
{ 
    float c,f=42;
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%.2f",c);
}