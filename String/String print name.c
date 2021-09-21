// Print the Name using string
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter the Name\n");
    scanf("%[^\n]", str);
    printf("Your name = %s", str);
}
