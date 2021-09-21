int main()
{
    int n,i;
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int a[n],p;
    printf("Enter the size of array\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    p = a[n-1];
    printf("%d", p);

        for(i=0;i<n-1;i++)
            printf("%d", a[i]);

}
