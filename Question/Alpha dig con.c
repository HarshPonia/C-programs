int main()
{
    char c;
    scanf("%c", &c);
    if((c>='A' && c<='Z')||(c>='a' && c<='z'))
    {
        printf("Alphabet");
    }
    else if(c>='0' && c<='9')
    {
        printf("Digits");
    }
    else
    {
        printf("Specail character");
    }
}
