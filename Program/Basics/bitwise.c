#include<stdio.h>

int main()
{
	int a,b,xor,or,and,c;
	scanf("%d %d", &a,&b);
	and = a&b;
	or = a|b;
	xor = a^b;
	
 	while (and && or && xor) { 
        and--; 
        or--; 
        xor--; 
        c++; 
	return c;
}
	
}