
//2D Array compile time initialization
#include<stdio.h>
int main()
{
    int i,j,m,n;
    //Element in 2d array
    printf("Enter the size of array :\n");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter the biden votes\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
         printf("Enter the trumph votes\n");
    }
    printf("Array is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        printf("%d\t", a[i][j]);
    }
            printf("\n");



    }
}
