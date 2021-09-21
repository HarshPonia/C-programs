// standard deviation of Array
#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000],n,i,sum=0,s,mean,sd=0,d;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    printf("Enter terms:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }

        mean = sum/n;
        for(i=0;i<n-1;i++)
        sd=sd+pow(a[i]-mean,2);
        d = sd/n;
        s = sqrt(d);


    printf("standard deviation\n %d\n ", s);
}
