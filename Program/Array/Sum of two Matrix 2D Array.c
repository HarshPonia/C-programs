#include<stdio.h>
int main()
{
    int i,p,q,n,m,j,s=0;
    printf("Enter the first Row & column Size\n");
    scanf("%d%d", &m,&n);
    printf("Enter the Second Array Row & column Size\n");
    scanf("%d%d", &p,&q);
    int a[m][n],b[p][q];
    if(m==p && n==q)
    {
    printf("Enter the first matrix  element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix  element\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("First matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Sond matrix is \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    }
    else
    {
        printf("invalid Size");
    }
}
