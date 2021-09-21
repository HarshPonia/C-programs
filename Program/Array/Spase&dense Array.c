//check the matrix sparse & dense
#include<stdio.h>
int main()
{
        int i,n,f,m,j,k;
        printf("Enter the size of array:\n");
        scanf("%d%d", &m,&n);
        int a[m][n];
        printf("Enter the Element\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
           {
               scanf("%d", &a[i][j]);
            if(a[i][j]==0)
                f++;
            else
                 k++;
         }

        }
        if(f>k)
        {
            printf("Matrix Is sparse");
        }
        else
        {
            printf("Matrix Is dense");
        }

}
