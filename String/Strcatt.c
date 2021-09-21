int main()
{
    char str1[100], str2[100];
    int i,j;
    gets(str1);
    gets(str2);
   i=strlen(str2);
     for(j=0;str1[j]!='\0';j++)
    {
            str2[i] = str1[j];
            i++;
    }
    str2[i]='\0';
    puts(str2);

}
