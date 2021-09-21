#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the size of arry\n");
    scanf("%d%d", &m, &n);
    int A[100][100], Temp,C;
    printf("Enter the element\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d" , &A[i][j]);
        }

C = 100;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        Temp = A[i][j] + C;
       A[i][j] = A[j][i];
        A[j][i] = Temp-C;
    }
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       printf("%d ",A[i][j]);
}
