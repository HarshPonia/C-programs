#include<stdio.h>
int main()
{
    int *p,**q;
    int a=10;
    p=&a;
    q=&p;
    printf("%d\n", a);
    printf("%d\n", &*p);
    printf("%u\n", &a);
    printf("%p\n", p);
    printf("%u\n", &p);
    printf("%d\n",q);

    printf("%d\n", **q);
    printf("%u\n", &q);


}