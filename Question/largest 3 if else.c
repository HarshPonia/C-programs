/*largest number using if else meyhod 2*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\t");
    scanf("%d%d%d", &a,&b,&c);
    if(a>=b&&a>=c)
    {

            printf("%d", a);

    }
    else if(b>=a&&b>=c)
    {
      printf("%d", b)
    }
    else
    {
        printf("%d", c)
    }
}

