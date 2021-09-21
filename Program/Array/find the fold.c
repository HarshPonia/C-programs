
int main() {
    int i,j,n,m;
    scanf("%d %d", &m, &n);
    int a[m][n];
    if(m==n)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {    printf("%d\n", a[i][j]);
            }

        }
         printf("  ");
    }

    }
    else
    printf("Not square matrix.");


}
