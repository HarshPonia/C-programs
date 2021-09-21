#include<stdio.h>
int main()
{
    int a[10000],n,i,z=0,po=0,no=0;
    printf("Enter the size of Array");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>0)
            po++;
        else if(a[i]==0)
            z++;
        else
            no++;
    }
    printf("No. of Positive : %d\nNo. of Negative: %d\nNo.of Zero: %d\n", po,no,z);
}
