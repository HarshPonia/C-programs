#include<stdio.h>
__int8 multiply(int n)
{
    n =n*10;
    printf("%d\n", n);
    return n;
}
int main()
{
    int n;
    printf("Enter number\n");
    scanf("%d", &n);
    n=multiply(n);
   printf("%d", n);
}