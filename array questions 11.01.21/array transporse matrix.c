#include <stdio.h>

int main()
{
    int a[1000][1000],m,n,i,j;
printf("enter array row size");
scanf("%d",&m);
printf("enter array columb size ");
scanf("%d",&n);
for(i=0;i<=m-1;i++)
{
    for(j=0;j<=n-1;j++)
    scanf("%d",&a[i][j]);
}
printf("orginal matrix ");
 for(i=0;i<=m-1;i++)
{
        for(j=0;j<=n-1;j++)
        printf("%d ",a[i][j]);
        printf("\n");
}
printf("Transporse matrix \n");
for(i=0;i<=n-1;i++)
{
    for(j=0;j<=m-1;j++)
    printf("%d ",a[j][i]);
    printf("\n");
}
    return 0;
}

