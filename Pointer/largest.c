#include<stdio.h>
int main()
{
    int a,b,c,*pa=&a,*pb=&b,*pc=&c;
    printf("enter three numbers\n");
    scanf("%d %d %d", &*pa,&*pb,&*pc);
    if(*pa>*pb)
    {
        if(*pa>*pc)
        printf("Largest is %d", *pa);
        else 
        printf("Largest num is %d",*pc);
    }
    else if(*pb>*pc)
    printf("Largest is = %d", *pb);
    else
    printf("largest is= %d", *pc);

}