// Reverse array print
int main()
{
    int n,i;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse Array is\n");
    for(i=n-1;i>=0;i--)
    {
         printf("%d", a[i]);
         printf("\n");
    }

}
