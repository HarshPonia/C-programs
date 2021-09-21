int main()
 {
     int a[1000],i,n,pos;
     printf("Enter the size of Array\n");
     scanf("%d", &n);
     printf("Enter the element \n");
     for(i=0;i<n;i++)
        scanf("%d", &a[i]);
     printf("Enter the position you want to delete\n");
     scanf("%d", &pos);
     if(pos>0&&pos<n)
     {
         printf("Element deleted %d", a[pos-1]);
         for(i=pos;i<=n-1;i++)
            n=n-1;

     }
     printf("Array after deletion\n");
     for(i=0;i<n;i++)
        printf("%d ", a[i]);
 }
