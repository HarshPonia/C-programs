// upper case alphabet to lower case alphabet
#include<stdio.h>
char uppertolower(char c)
{
    if(c>='A'&&c<='z')
        c=c+32;
    return c;
}
void main()
{
    char ch;
    scanf("%c", &ch);
    ch = uppertolower(ch);
    printf("%c", ch);

}
