#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    int i,j;
    gets(str);
    printf("enter the char\n");
    scanf("%c", &c);
    for(i=0;str[i]!='\0';i++)
    {}
    for(j=0;j<=i-1;j++)
    {
        if(str[j]==c)
        {
            str[j]=str[j+1];
        }
        str[j]=str[j+1];
    }
    puts(str);

    return 0;
}
