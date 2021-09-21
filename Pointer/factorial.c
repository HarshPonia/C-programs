#include<stdio.h>
int main()
{
    int n,*pn=&n,f=1,*pf = &f;
    printf("Enter  a number\n");
    scanf("%d", pn);
    while(*pn>0)
    {
        *pf = ((*pf)*(*pn));
        *pn=*pn-1;
    }
    printf("%d", *pf);
}