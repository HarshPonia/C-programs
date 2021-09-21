// Q2.	Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
int main()
{
    int a[1000],E[1000],j=0,k=0,O[1000],n,i;
    printf("Enter the size of Array\n ");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);


        if(a[i]%2==0)
        {
            E[j]=a[i];
            j++;
        }
        else
        {
            O[k]=a[i];
            k++;
        }
    }
    printf("Even Array is \n");
    for(i=0;i<j;i++)
       {
	 printf("%d\n", E[i]);

	}
    printf("Odd Array is\n");
    for(i=0;i<k;i++)
        {
	printf("%d\n", O[i]);

	}
}
