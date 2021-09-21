int main()
{
    char str[100];
    int i,s=0,d=0,c=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
         if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
            c++;
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else
            s++;
    }
    printf("char = %d\ndigits = %d\nss = %d", c,d,s);
}

