int main()
{
    int N,i = 1;
    scanf("%d",&N);
    if(N==0)
        printf("%d", 0);
    else
{
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i<=N);
}
}
