#include<stdio.h>

int main()
{
  char str1[25],str2[25];
  int i,j;
  printf("\nEnter First String:");
  scanf("%[^\n]s", str1);
  printf("\nEnter Second String:");
  scanf("%*c%[^\n]s", str1);
  for(i=0;str1[i]!='\0';i++)
  {
  }

  i++;
  for(j=0;str2[j]!='\0';i++,j++)
  {
      str1[i] = str2[j];

  }
  str1[i]='\0';
  printf("%s", str1);
   printf("%s", str2);
}
