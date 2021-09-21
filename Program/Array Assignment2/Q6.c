#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, s1=0, s2=0;
	printf("Enter size of row and column:\n");
	scanf("%d %d", &m, &n);
	if(m==n)
	{
		printf("Enter the elements\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d", &a[i][j]);
				if(i==j)
					s1=s1+a[i][j];
				if(i+j==n-1)
					s2=s2+a[i][j];
			}
		}
		printf("Sum of principal diagonal = %d\n", s1);
		printf("Sum of other diagonal = %d", s2);
	}
	else
		printf("Size of order must be same");
	return 0;
}
