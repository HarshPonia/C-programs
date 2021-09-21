
int main()
{
    int a,b,c;
    char ch;
    do
    {
    printf("Hello \t sir\n");
    printf("Enter two numbers:\n");
    scanf("%d%d", &a,&b);

    printf("MENU:-\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD\n");
    printf("Enter your choice from the MENU:\n ");
    scanf("%d", &c);


    switch(c)
    {
        case 1: printf("You have %d", a+b);
        break;
        case 2: printf("You have %d", abs(a-b));
        break;
        case 3: printf("You have %d", a*b);
        break;
        case 4: printf("You have %d", a/b);
        break;
        case 5: printf("You have %d", a%b);
        break;
        default : printf("invalid numbers");
    }

    printf("\n\tdo you want to continue same process y for Yes or n for no\n ");
    scanf("%*c%c", &ch);
    }
    while(ch == 'y'||ch == 'Y');
    printf("Thank \t you \t for \t visiting");

}

