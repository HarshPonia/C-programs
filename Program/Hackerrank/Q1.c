/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{
int a[1000][1000],m,n,i,j,sum=0,sum1=0;
printf("enter the row size ");
scanf("%d",&n);
printf("enter coloumb size");
scanf("%d",&m);
printf("enter matrix");
for(i=0;i<=n-1;i++)
{
        for(j=0;j<=m-1;j++)
        scanf("%d",&a[i][j]);
}
 if(m==n)
{
    for(i=0;i<=n-1;i++)
{
        for(j=0;j<=m-1;j++)
        {
            if(i==j)
        sum = sum + a[i][j];
	else if (i+j == 2)
		sum1 = sum1+a[i][j];
    
}
}
printf("diff of diagnols = %d",sum+sum1);
}
else
printf("not valid matrix");



    return 0;
}
