#include<stdio.h>
int main()
{
    int a = 1058;
    int *p = &a;
    printf("%d\n", a);
    printf("%u\n",p);
    printf("%u\n",&p);
    printf("%u\n", &a);
    printf("%d\n", *p);
    printf("%u\n", sizeof(p));
}