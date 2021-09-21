int main()
{
    int a,b,c,sum;
    scanf("%d%d", &a,&b);
    printf("Enter a choice\n 1. ADD\n2. subtruct\n3. multiply\n4.division\n5. modulus\n");
    scanf("%d", &a);
    switch(a)
    {


    case 1:
        printf("sum is %d", b+c);
        break;
    case 2:
        printf("Sub is %d", b-c);
        break;
    case 3:
        printf("mul is %d", b*c);
        break;
    case 4:
        printf("div is %d", b/c);
        break;
    case 5:
        printf("Rem is %d", b%c);
        break;
    default :
        printf("Invalid Number");
    }

}
