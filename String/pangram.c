#include<string.h>
#include<stdio.h>
int main()
{
    char str[50];
    int i,c=0;
    int count[26]={0};

    gets(str);



    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
            continue;


        if(str[i]>96)
           c+= count[str[i]-97] +=1;
       else
           c+= count[str[i]-65] +=1;
    }

        if(c==26)
          {
             printf("Panagram");

          }
    else
        printf("not Panagram");

        return 0;

}
