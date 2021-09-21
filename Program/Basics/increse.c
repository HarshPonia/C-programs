/// increse and decrese function

#include<stdio.h>

void main()
{
	int a,b;
	scanf("%d", &a);
	b = a++ + ++a - a++ + ++a;
	printf("%d\n%d" , a,b);
}