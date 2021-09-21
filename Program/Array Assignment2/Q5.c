#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, t;
	printf("Enter no. of row:\n ");
	scanf("%d", &m);
	printf("Enter no. of column:\n ");
	scanf("%d", &n);
	printf("Enter the elements of array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d", &a[i][j]);
	}
	printf("Matrix before transpose\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ", a[i][j]);
		printf("\n");
	}
	printf("Matrix after transpose\n");
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	else
	{
		t=n;
		n=m;
		m=t;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ", a[j][i]);
		printf("\n");
	}
	return 0;

}
