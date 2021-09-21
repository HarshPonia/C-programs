// reverse a string
#include<stdio.h>
int main()
{
    char str[100];
    int i,k=0,l;
    printf("Enter the string\n");
    gets(str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        k++ = l;
    }
    puts(l);
}
