int main()
{


int a[100][100], n, m, i, j, f=0, count=0, x=0;
    printf("Enter no. of rows: ");
scanf("%d", &m);
printf("Enter no. of column:\n");
scanf("%d", &n);
    if(m==n)
    {
        printf("Enter matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d", &a[i][j]);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                if(a[i][j]==1)
                x=x+1;
                else
                {
            printf("This matrix is not identical matrix\n");
                f=f+1;
                break;
            }
        }
 else
 {
    if(a[i][j]==0)
    count=count+1;
    else
    {
        printf("This matrix is not identical matrix\n");
    f=f+1;
    break;
    }
    }
    }
    if(f==1)
break;
}
if(count==m*n-m && x==m)
printf("This matrix is identical matrix\n");
}
else
printf("Order must be same for identical matrix\n");
return 0;
}
