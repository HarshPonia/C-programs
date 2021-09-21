int main()
{
    int a[1000],e[1000],o[1000],i,j=0,k=0,n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even Array is\n");
    for(i=0;i<n;i++)
       {
           if(a[i]%2==0)
            printf("%d\n", a[i]);
       }
       printf("Odd Array is\n");
     for(i=0;i<n;i++)
     {
         if(a[i]%2!=0)
            printf("%d\n", a[i]);
     }


}
