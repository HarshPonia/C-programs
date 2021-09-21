
#include<stdio.h>
int main()
{
    int arr[100], flag[100],i,j,f,n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=i+1;j<n;j++)
        
        if(arr[i]==arr[j])
        {
            f++;
            flag[j]=-1;
        }
        
        if(flag[i]==0)
        printf("frequency of %d = %d" ,arr[i],f);
    }
}