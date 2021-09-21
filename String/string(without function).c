int main()
{

    char i,str1[100],str2[100];
    printf("Enter the string\n");
    gets(str1);
    for(i=0;str1[i]!=0;i++)
    {
        str2[i]=str1[i];
    }
    printf("string is = %s\nLength is %d\n", str2, i);
}
