// Find the largest number in array and swap them
#include<stdio.h>
int main()
{
        int a[1000],n,i,max=0,min=0, pos1,pos2,t;
        printf("Enter the size  of array\n");
        scanf("%d", &n);
        printf("Enter the element\n");
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);
        printf("Array is\n");
         for(i=0;i<n;i++)
            printf("%d\n", a[i]);
        max =a[0];
        min =a[0];
        pos1 = 0;
        pos2 = 0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                pos1=i;
            }
            if(a[i]<min)
            {
                min = a[i];
                pos2=i;
            }
        }
        printf("Largest number is %d\nSmallest number is %d\n", max, min);
        t=a[pos1];
        a[pos1]=a[pos2];
        a[pos2]=t;
         printf("Array After swaping largest and smallest\n");
         for(i=0;i<n;i++)
            printf("%d\n", a[i]);

}
