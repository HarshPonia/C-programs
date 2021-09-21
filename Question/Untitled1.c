int main()
{
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
        printf("lower Vowel.");
        }
    else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
        printf("upper Vowel.");
        }
    else if(c>='A' && c<='Z')
        {
       printf("upper Consonant.");
        }
    else if(c>='a' && c<='z')
        {
        printf("lower Consonant.");
        }
    else if(c>='0' && c<='9')
    {
    printf("enter value is digit ");
    }
    else
    {
    printf("enter value is special character ");
    }
    return 0;
    }
