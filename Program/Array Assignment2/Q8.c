
#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, b[100][100], p, q;
	printf("Enter the row order of 1st matrix:\n");
	scanf("%d", &m);
	printf("Enter the column order of 1st matrix:\n");
	scanf("%d", &n);
	printf("Enter 1st matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d", &a[i][j]);
	}
	printf("Enter the row order of 2nd matrix: ");
	scanf("%d", &p);
	printf("Enter the column order of 2nd matrix: ");
	scanf("%d", &q);
	printf("Enter 2nd matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		scanf("%d", &b[i][j]);
	}
	if(m==p && n==q)
	{
		printf("Sum of two matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			printf("%d  ", a[i][j]+b[i][j]);
			printf("\n");
		}
	}
	else
	printf("Invalid order of matrix for sum the order must be same");
	return 0;

}
