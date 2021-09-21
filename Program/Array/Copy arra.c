#include<stdio.h>
int main()
{
    int a[100],b[100];
    int i,n;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        b[i]= a[i];
    }

    printf("Array  is \n");
    for(i=0;i<n;i++)
        printf("%d ", b[i]);
}
