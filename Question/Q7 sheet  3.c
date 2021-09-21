int main()
{
    int ch;
    printf("Enter a value between 1 or 2:");
    scanf("%d", &ch);
    switch(ch,ch+1)
    {
        case 1: printf("1");
        break;
        case 2: printf("2");
        break;
    }
}
