// count the vowel
#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='o'||str[i]=='u')
            c++;
    }
    printf("%d",c);

}
