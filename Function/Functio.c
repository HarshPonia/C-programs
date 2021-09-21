#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;

}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
void main()
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    c=add(a,b);
    printf("ADD %d\n", c);
     c=sub(a,b);
    printf("Sub %d\n", c);
     c=mul(a,b);
    printf("Mul %d\n", c);
     c=div(a,b);
    printf("div %d\n", c);
     c=mod(a,b);
    printf("Mod %d\n", c);
    printf("%u", &a);
     
}