#include<stdio.h>
int main()
{
	int i, s=0, d=0, ss=0;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
			s=s+1;
		else if(a[i]>='0' && a[i]<='9')
			d=d+1;
		else
			ss=ss+1;
	}
	printf("Total no. of alphabets = %d\n", s);
	printf("Total no. of digits = %d\n", d);
	printf("Total no. of special character = %d", ss);
	return 0;
}