// Sum of row and column in 2D Array
//Author Harsh Ponia
#include<stdio.h>
int main()
{
    int a[100][100], i,m,n,s,j;
    printf("Enter the Row Size of array:\n");
    scanf("%d", &m);
    printf("Enter the Column Size of array:\n");
    scanf("%d", &n);
    printf("Enter the element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
              scanf("%d", &a[i][j]);

        }

    }
    printf("You Enter this Array\n");
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d\t", a[i][j]);

        }
          printf("\n");

    }
    for(i=0;i<n;i++)
    { s=0;
         for(j=0;j<m;j++)
        {
            s=s+a[j][i];z
        }
          printf("Sum of column %d = %d\n", i+1,s);
    }
     for(j=0;j<m;j++)
    {   s=0;
         for(i=0;i<n;i++)
        {
            s=s+a[j][i];
        }
          printf("Sum of row %d = %d\n", j+1,s);
    }


}
