#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j;
	printf("Enter size of row and column:\n");
	scanf("%d %d", &m ,&n);
	if(n==m)
	{
		printf("Enter the elements\n");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d", &a[i][j]);
		printf("Diagonal in matrix form\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
					printf("%d ", a[i][j]);
				printf("  ");
			}
			printf("\n");
		}
	}
	else
		printf("Size of order must be same");
	return 0;
}
