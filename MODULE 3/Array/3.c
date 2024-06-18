#include <stdio.h>
int main()
{
 char str[100];
 int i,j;
 char c;
 
 printf("Please enter a string: ");
 fgets(str, 100, stdin);
   
 for(i=0;str[i];i++);
 for(j=0,i--;j<i;j++,i--)
 {
  c=str[i];
  str[i]=str[j];
  str[j]=c;
 }

 printf("Reversed string is: %s",str);

 return 0;
}

