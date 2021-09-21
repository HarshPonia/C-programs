//largest using simple if
#include<stdio.h>
int main()
  {

   int a,b,c;
    int l;
    printf("Enter three numbers:\t");
    scanf("%d%d%d", &a,&b,&c);
    l = a;
    if(b>l)
       {
          l=b;
       }
    if(c>l)
       {
           l=c;
       }

        printf("%d", l);
  }
