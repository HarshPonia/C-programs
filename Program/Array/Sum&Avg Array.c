// Sum & average In array
int main()
{
    int n,i,s=0;
    float avg;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    printf("Sum of Array is = %d\n", s);
    avg = (s/n);
    printf("Avg of Array = %f\n", avg);

}
