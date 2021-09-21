// conditional operators

#include<stdio.h>
void main()
{
	int a,b,c,out;
	scanf("%d %d %d", &a, &b, &c);
	out = (a>b?a:c:b>c?b:c);
	printf("%d", out);
}