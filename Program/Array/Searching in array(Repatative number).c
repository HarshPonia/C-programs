
int main()
{
    int a[10000],i,e,f=0,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the element :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number you want to find:\n");
    scanf("%d", &e);
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            printf("Element found at position %d\n", i+1);
            f++;

        }
        if(f==0)
            printf("Element not find");
    }
}
