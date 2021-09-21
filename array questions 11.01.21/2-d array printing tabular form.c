int main()
{
int a[1000][1000],m,n,i,j;
printf("enter row size");
scanf("%d",&m);
printf("enter coloumb size");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    for(j=0;j<=n-1;j++)
    scanf("%d",&a[i][j]);
}
for(i=0;i<=n-1;i++)
{
    for(j=0;j<=n-1;j++)
    printf("%d",a[i][j]);
    printf("\n");
}
}

