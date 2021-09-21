int main()
{
    int a[1000],i,n,s=0,avg=0;
    printf("Enter the  size of array:\n ");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        s = s+a[i];
    }
    printf("Sum is %d\n", s);
    avg = s/n;
    printf("Average is %d\n", avg);
}
