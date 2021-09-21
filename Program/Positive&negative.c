int main()
{
   int i,n,j=0,po=0,z=0;
   printf("Enter the size of array\n");
   scanf("%d", &n);
   int a[n];
   printf("Enter the element\n");
   for(i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]<0)
       {
           j++;
       }

       else if(a[i]>0)
       {
           po++;



       }

       else
       {
           z++;


       }

   }

printf("negative = %d\npositive are =%d\nZero are = %d\n", j,po,z);
}
