#include<stdio.h>
#include<string.h>
int main()
{
	int i=0, j=0, la, lx, c=0, f=0;
	char a[100], x[100];
	printf("Enter your string\n");
	gets(a);
	printf("Enter the word whose last occurance to be found\n");
	scanf("%s", x);
	la=strlen(a);
	lx=strlen(x);
	while(i<=lx-1)
	{
		f=0;
		while(j<=la-1)
		{
			if(x[i]==a[j])
			{
			        c=c+1;
			         j++;
			         break;
			}
			else if(j!=0)
			{
			      i=0;
			      f=1; 
			      c=0;
			}   
			j++;
		}
		if(f==0)
		     i++;
	}
	if(c==lx)
	      printf("Last occurence of  word %s", x);
	return 0;
}