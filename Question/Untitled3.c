int main()
{
    char c;
    scanf("%c", &c);
    if(c='A'||c='E'||c='I'||c='O'||c='U')
    {
        printf("Upper case alphabet");
    }
    else if(c='a'||c='e'||c='i'||c='o'||c='u')
    {
        printf("Lower case alphabet");
    }
    else if(c>='A'&&c<='Z'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
    {
        printf("Uper case Alphabet")
    }
}
