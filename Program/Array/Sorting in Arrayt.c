#include<stdio.h>
int main()
{
    int a[10000],i,n,j,t;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for(i=0;i<=n-1;i++)
        {
            scanf("%d", &a[i]);

        }
        for(i=0;i<=n-1;i++)
        {
        for(j=0;j<=n-1-i;j++)

            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

        }

    printf("Array after sorting:\n");
    for(i=0;i<=n-1;i++)
     {
          printf("%d ", a[i]);
     }
}
