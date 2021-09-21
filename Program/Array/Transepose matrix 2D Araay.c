#include<stdio.h>
int main()
{
    int i,n,m,j;
    printf("Enter the Row & Column Size \n");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter the size of element:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    }
    printf("Your array is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transepose array is\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }



}
