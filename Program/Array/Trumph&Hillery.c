#include<stdio.h>
int main()
{
    int a[5],b[5],i,t=0,h=0;
    printf("Enter the Trump votes int 50 states\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Enter the Hillary votes in 50 states\n");
    for(i=0;i<5;i++)
        scanf("%d", &b[i]);
        for(i=0;i<5;i++)
            {
                if(a[i]>b[i])
                    printf("Trump winner in %d state\n", i+1);
                else if(a[i]<b[i])
                    printf("Hillary Winner in %d state\n", i+1);
                else
                    printf("no Winner votes are equal in %d state\n" ,i+1);
            }
            for(i=0;i<5;i++)
            {
                t = t+a[i];
                h=h+b[i];

            }
        if(t>h)
            printf("Trump is winner\n");
        else
            printf("Hillary is winner\n");
}
