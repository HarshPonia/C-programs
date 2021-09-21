#include<stdio.h>
int main()
{
    int a,b,c,*p=&a,*q=&b,*r=&c;
    printf("Enter the nbers\n");
    scanf("%d %d", &*p,&*q);
    *r =*p+*q;
    printf("%d",*r);
}