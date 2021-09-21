#include<stdio.h>
int add(int a, int b)

{
    int s;
    s = a+b;
    return s;
}
void main()
{
    int a,b,sum;
    printf("Enter the numbers\n");
    scanf("%d%d", &a,&b);
    sum = add(a,b);
    printf("%d", sum);
}
