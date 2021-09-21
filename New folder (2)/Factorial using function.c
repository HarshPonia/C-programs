// find the factorial using function
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
    int n,f;
    printf("Enter the number\n");
    scanf("%d", &n);
    f = fact(n);
    printf("%d", f);

}
