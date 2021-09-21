//insert an element in Array
#include<stdio.h>
int main()
{
    int a[1000],j,i,e,pos,n;
    printf("Enter the size of  Array\n");
    scanf("%d", &n);
    printf("Enter the7 element \n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("How many num you want to input\n");
    scanf("%d", &j);
    for(i=0;i<j;i++)
    {


    printf("Enter the position you want to insert\n");
    scanf("%d", &pos);
    printf("Enter the element \n");
    scanf("%d", &e);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];

    }
    a[pos-1]=e;
    n++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);

    }
}
