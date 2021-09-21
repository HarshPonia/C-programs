#include<stdio.h>
int main()
 {
    int n;
    printf("Enter the no. of employee\n");
    scanf("%d",&n);
    int arr[n],i,m,x;
    printf("Enter the salary\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    m = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>m)
            m=arr[i];
    }
    x=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<m)
            x = arr[i];
    }
    printf("%d", m);
 }
