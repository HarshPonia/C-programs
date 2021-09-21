int main()
{
    char str[100],v[100],C[100],D[100],S[100];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
         if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u')
                {
                    v[i]=str[i];
                }
        else if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
            C[i]= str[i];

        else if(str[i]>='0'&&str[i]<='9')
            D[i]= str[i];
        else
            S[i]=str[i];
    }
    v[i] = '\0';
    C[i] = '\0';
    D[i] = '\0';
    S[i] = '\0';
    puts(v);
     puts(C);
      puts(D);
       puts(S);
}
