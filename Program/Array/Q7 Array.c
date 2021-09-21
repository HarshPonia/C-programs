#include<stdio.h>
void main()
{
    int n;
    printf("Enter the states\n");
    scanf("%d", &n);
    int a[n],b[n],i,t,b,s1,s2;
    printf("Enter the trump votes in %d states\n", n);
    for(i=0;i<n;i++)
       {
           scanf("%d", &a[i]);
           s1=s1+a[i];
       }

    printf("Enter the biden votes in %d states\n", n);
    for(i=0;i<n;i++)
       {
           scanf("%d", &a[i]);
           s=s+a[i];
       }
       if(s1>s2)
        printf("Trump is Winner\n");



}
