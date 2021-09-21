// find the minimum number in Array
#include<stdio.h>
int main()
{
    int i,n,min=0;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element :\n");
    min = a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<min)
            min = a[i];
    }
    printf("Minimum Number is = %d", min);

}
