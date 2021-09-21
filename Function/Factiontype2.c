#include<stdio.h>
void add(int a, int b) 
{
    int c;
    c= a+b;
    printf("Addition of nubers\n%d", c);
}
void main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    add(a,b);
    printf("%u", &a);
}
