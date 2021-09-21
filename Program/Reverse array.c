int main()
{
    int a[1000],i,c,n,rev = 0,rem;
    printf("Enter Size of upto 1000: ");
    scanf("%d", &n);
    printf("You enter this %d", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements are ");
    for(i=0;i<n;i++)
    {
        c = printf("%d\n", a[i]);

    }
   for(i=n-1;i>=0;i--)
     {
        printf("%d", a[i]);
    }
    return 0;
}

