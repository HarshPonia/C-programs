//Q3 2-DArray

#include<stdio.h>
int main()
{
	int a[100][100], b[100][100], c[100][100], na, ma, nb, mb, i, j, k, l, s=0;
	printf("Enter the row and column of 1st matrix: ");
	scanf("%d %d", &ma, &na);
	printf("Enter the row and column of 2nd matrix: ");
	scanf("%d %d", &mb, &nb);
	if(ma==nb)
	{
		printf("Enter 1st matrix\n");
		for(i=0;i<ma;i++)
			for(j=0;j<na;j++)
				scanf("%d", &a[i][j]);
		printf("Enter 2nd matrix\n");
		for(i=0;i<mb;i++)
			for(j=0;j<nb;j++)
				scanf("%d", &b[i][j]);
		printf("1st matrix\n");
		for(i=0;i<ma;i++)
		{
			for(j=0;j<na;j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
		printf("2nd matrix\n");
		for(i=0;i<mb;i++)
		{
			for(j=0;j<nb;j++)
				printf("%d ", b[i][j]);
			printf("\n");
		}
		printf("Multiplication of both matrix\n");
		for(i=0;i<ma;i++)
		{
			for(j=0;j<nb;j++)
			{
				for(l=0,k=0;l<na,k<mb;l++,k++)
					s=s+a[i][l]*b[k][j];
				c[i][j]=s;
				printf("%d\t", c[i][j]);
				s=0;
			}
			printf("\n");
		}
	}
	else
		printf("row of 2nd matrix and column of 1st matrix must be same");
	return 0;
}
