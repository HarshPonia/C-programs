#include<stdio.h>
void main()
{
	long int a[1000],i,n,s=0;
	char g;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }



    printf("%llu\n", s);

}
