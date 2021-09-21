// find the hamming distance two numbers
#include<stdio.h>
int Hamming(int a,int b)
{
    int c=0,r,s;
    while(a>0||b>0)
    {
        r=a%2;
        s=b%2;
        if(r!=s)
            c++;
        a=a/2;
        b=b/2;
    }
    return c;
}
void main()
{
    int a,b,r;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a , &b);
    r = Hamming(a,b);
    printf("%d", r);
}
