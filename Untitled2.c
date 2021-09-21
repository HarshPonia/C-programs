#include<stdio.h>
int main()
{
    int i=0,j=0;
    int n;
    printf("Enetr the number of rows\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<=n-i;j++)
        printf("*");

        printf("\n");
        for(j=0;j<=i;j++)
            printf(" ");

    }
}
