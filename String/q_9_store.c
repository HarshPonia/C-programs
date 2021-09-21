#include<stdio.h>
int main()
{
	int i, j=0, k=0, l=0, m=0;
	char a[100], p[100], q[100], r[100], s[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
				p[j]=a[i];
				j++;
		}
		else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			q[k]=a[i];
			k++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			r[l]=a[i];
			l++;
		}	
		else
		{
			s[m]=a[i];
			m++;
		}
	}
	p[j]='\0';
	q[k]='\0';
	r[l]='\0';
	s[m]='\0';
	printf("string of vowels\n%s\n", p);
	printf("string of consonants\n%s\n", q);
	printf("string of digits\n%s\n", r);
	printf("string of special character\n%s", s);
	return 0;
}
