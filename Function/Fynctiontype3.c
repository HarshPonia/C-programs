#include<stdio.h>
int add()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d %d", &a,&b);
    c =a+b;
    return c;
}
int main()
{
    int c;
    c=add();
    printf("%d", c);
}