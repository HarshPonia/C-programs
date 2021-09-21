#include<stdio.h>
int main()
{
    int a[10];
    int i;

    printf("Enter the array element\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);

    }

    printf("Array  is \n");
    for(i=9;i>=0;i--)
        printf("%d ", a[i]);
}

