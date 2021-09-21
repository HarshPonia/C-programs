// find the length of string
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter the String\n");
    scanf("%[^\n]s", str);
    int l = strlen(str);
    printf("Length = %d", l);
}
