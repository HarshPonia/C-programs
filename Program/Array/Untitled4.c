
int main() {
    int a[10000][10000],i,n,j,m;
    scanf("%d%d", &m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d", a[i][j]);
        }
    }
}

