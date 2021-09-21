/*A man has certain number of apples.
If he picks them in a group of 7, he can pick all of them.
If he picks them in a group of 6, 1 apple is left behind.
If he picks them in a group of 5, 1 apple is left behind.
If he picks them in a group of 4, 1 apple is left behind. 
If he picks them in a group of 3, 1 apple is left behind.
If he picks them in a group of 2, 1 apple is left behind.
Write a program that identifies the minimum number of apples he has*/

#include<stdio.h>
int main()
{
	int n,min;
	printf("Enter number of apple in a group : ");
	scanf("%d", &n);
	if(n>=7)
	{
		min = 7;
		printf("Minimum apple is %d", min);
	}
	else if(n=6)
	{
		min = 5;
		printf("Minimum apple is %d", min );	
	}
	else if(n=5)
	{
		min = 4;
		printf("Minimum apple is %d", min);
	}
	else if(n= 4)
	{
		min = 3;
		printf("Minimum apple is %d", min);
	}
	else if(n= 3)
	{
		min = 2;
		printf("Minimum apple is %d", min);
	}
	else if(n = 2)
	{
		min = 1;
		printf("Minimum apple is %d", min);
	}
	else
	{
		
		printf("Not valid");
	}
	
}