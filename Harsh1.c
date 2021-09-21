#include<stdio.h>
int main()
{

int n=3,i;
for(i=0;i<=n;i++)
    {
        printf("\t@\t@");
        printf("\n");
    }
printf("\t");
for(i=0;i<n+2;i++)
    {

        printf("@ ");
    }
printf("\n");
for(i=0;i<=n;i++)
    {
        printf("\t@\t@");
        printf("\n");
    }

int b = 4,j;
printf("\t");
for(j=0;j<=b;j++)
    if(j==0||j==b)
    printf(" ");
    else
    printf("@ ");
printf("\n");
for(j=0;j<=b-2;j++)
    {
        printf("\t@     @");
        printf("\n");
    }
printf("\t");
for(j=0;j<b;j++)
    printf("@ ");
printf("\n");

for(j=0;j<=b-2;j++)
    {
        printf("\t@     @");
        printf("\n");
    }

printf("\n");

int c = 4,k,l;
printf("\t");
for(k=0;k<=c;k++)
    if(k==0||k==c)
    printf(" ");
    else
    printf("@ ");
printf("\n");
for(k=0;k<=c-2;k++)
    {
        printf("\t@      @");
        printf("\n");
    }
printf("\t");
for(k=0;k<c;k++)
    printf("@ ");
printf("\n");
printf("\t");
for(k=0;k<=c;k++)
    {
        for(l=0;l<=k+1;l++)
        {
            if(l==0 || l==k)
               {

               printf("@");
               }
            else
                printf(" ");
                printf("");

        }
        printf("\n\t");

    printf("");

    }
printf("\n");
printf("\t");
for(k=0;k<=c;k++)
    printf("@ ");
for(k=0;k<=c;k++)
    printf("\n\t@");
printf("\n\t");
for(k=0;k<=c;k++)
    printf("@ ");
printf("\n\t");
for(k=0;k<=c;k++)
    printf("\t@\n\t");
for(k=0;k<=c;k++)
    printf("@ ");

printf("\n");
printf("\n");

for(i=0;i<=n;i++)
    {
        printf("\t@\t@");
        printf("\n");
    }
printf("\t");
for(i=0;i<n+2;i++)
    {

        printf("@ ");
    }
printf("\n");
for(i=0;i<=n;i++)
    {
        printf("\t@\t@");
        printf("\n");
    }
printf("\n");

}


