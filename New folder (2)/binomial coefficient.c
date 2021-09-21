// WAP to find binomial coefficient using function

#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n>0)
    {
        f = f*n;
        n--;
    }
    return f;
}
void main()
{
    int r,n,bc;
    printf("Enter num\n");
    scanf("%d%d", &n, &r);
    if(r>n)
    {
        printf("Invalid input\n");
    }
    else
    {
        bc = fact(n)/(fact(n-r)*fact(r));
        printf("%d", bc);
    }
}
