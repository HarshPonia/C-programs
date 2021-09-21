int main() {
    int a[100000],n,i;
    scanf("%d", &n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=n-1;i++)
        if(a[i]%2==0)
        {
            printf("%d", 0);
        }
        else
        {
            printf("%d", 1);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
