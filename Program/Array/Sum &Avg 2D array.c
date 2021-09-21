int main()
{
    int m,n,i,s=0,j;
    float avg;
    printf("Enter the Size of array\n");
    printf("Row Size:-");
    scanf("%d", &m);
     printf("column Size:-");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter the element \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
            s=s+a[i][j];
        }
    }
    avg = (float)s/(m*n);
    printf("sum of array is = %d\nAvg of array is = %f\n", s,avg);
}
