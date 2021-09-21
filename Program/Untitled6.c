 int main()
 {
    int c,rem,sum =0;
    scanf("%d", &c);

 while(c>0)
    {
        rem = c%10;
        sum = sum+rem;

        c = c/10;
    }
     printf("sum is %d", sum);
 }
