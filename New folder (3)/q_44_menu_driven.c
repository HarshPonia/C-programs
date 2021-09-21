#include<stdio.h>
#include<string.h>
int main()
{
	int choice, l, i;
	char ch, a[100], b[100];
	printf("Menu\n1. Length of string\n2. Copy of one string into another\n3. Capitalize all letters of string\n4. Reverse of string\n5. Comparison of two strings\n");
	printf("Enter your choice from Menu\n");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:	printf("Enter your string\n");
		scanf("%*c%[^\n]", a);
		l=strlen(a);
		printf("Length of string is %d", l);
		break;
	case 2: 	printf("Enter one string\n");
		scanf("%*c%[^\n]", a);
		printf("Your another string\n");
		strcpy(b,a);
		puts(b);
		break;
	case 3: 	printf("Enter your string\n");
		scanf("%*c%[^\n]", a);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>=97 && a[i]<=122)
				a[i]=a[i]-32;
		}
		printf("String after capitalize all letters\n");
		puts(a);
		break;
	case 4: 	printf("Enter your string\n");
		scanf("%*c%[^\n]", a);
		strrev(a);
		printf("Reverse of string\n");
		puts(a);
		break;
	case 5: 	printf("Enter 1st string\n");
		scanf("%*c%[^\n]", a);
		printf("Enter 2nd string\n");
		scanf("%*c%[^\n]", b);
		if(strcmp(a,b)==0)
			printf("Identical");
		else if(strcmp(a,b)==1)
			printf("string 1st have more ASCII value of mismatching character of string 2nd");
		else
			printf("string 2nd have more ASCII value of mismatching character of string 1st");
		break;
	default: 	printf("Invalid choice");
	}
	printf("\nThanks for visiting now you can exit");
	return 0;
}