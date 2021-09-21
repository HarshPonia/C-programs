int main()
{
    int a[1000],i,n;
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
        printf("%d", a[i]);

    }
    return 0;
}
