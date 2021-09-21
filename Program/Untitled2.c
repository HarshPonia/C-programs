int main()
{
    int a,c,i=0;
    scanf("%d",&a);
    while(a>0)
    {
        c = a%10;
        i = i*10+c;
        printf("%d", c);
        a=a/10;
    }
}
