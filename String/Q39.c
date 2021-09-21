#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    int i,j;
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=="  ")
        {
            str[i]=str[i+1];
        }
    }

    puts(str);

    return 0;
}

