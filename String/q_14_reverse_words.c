#include<stdio.h>
int main()
{
	int i, j;
	char a[100], r;
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	if(a[0]==' ' && a[1]!=' ')
	{
		for(i=1;a[i]!=' ';i++);
		i=i-1;
		for(j=1;j<=i;j++,i--)
		{
			r=a[j];
			a[j]=a[i];
			a[i]=r;
		}
	}
	else if(a[0]!=' ')
	{
		for(i=0;a[i]!=' ';i++);
		i=i-1;
		for(j=0;j<=i;j++,i--)
		{
			r=a[j];
			a[j]=a[i];
			a[i]=r;
		}
}