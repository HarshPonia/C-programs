// find the largest number in Array
#include<stdio.h>
int main()
{
    int a[100000],i,n,max=0;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>max)
                max=a[i];
        }
        printf("Largest num is = %d", max);

}
