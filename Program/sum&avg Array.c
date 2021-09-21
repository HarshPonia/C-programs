int main()
{
    int a[1000],i,n,avg,rem,sum = 0;
    printf("Enter Size of upto 1000: ");
    scanf("%d", &n);
    printf("You enter this %d\n", n);
    printf("Enter the values:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements are\n ");
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);

    }
     for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
     printf("sum is %d\n", sum);

           avg = sum/i;


        printf("avg %d\n", avg);
}

