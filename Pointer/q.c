#include <stdio.h>

int main() {
    // Write C code here
    int a[100],i, j, n,s,s1,s2,k; 
    printf("enter the size of array \n");
    scanf("%d",&n);
    printf("enter the arraqay \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=0;
        s=s+a[i];
        for(j=i+1;j<n;j++)
        {
            s1 =0;
            s1 = s+a[j];
            for(k=i+2;k<n;k++)
            {
                s2=0;
                s2=s+a[k];
                if((s+s1+s2)==60)
                printf("yes\n");
                else
                printf("No\n");
            }
        }
    }
    
    return 0;
}