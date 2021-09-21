// addtion of two numbers given by user

#include<stdio.h>

void main()
{
	int a,b,sum;
	printf("Enter first number :");
	scanf("%d", &a);
	printf("Enter second number :");
	scanf("%d", &b);
	sum = a+b;
	printf("Sum is %d", sum);
	getch();
}