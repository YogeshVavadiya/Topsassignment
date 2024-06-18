#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str[100], word[20];
   int i, j, ls, lw, temp, countW=0, chk;
   printf("Enter the String: ");
   fgets(str,sizeof str,stdin);
   printf("Enter a Word: ");
   fgets(word,sizeof word,stdin);
   ls = strlen(str);
   lw = strlen(word);
   
   for(i=0; i<ls; i++)
   {
      temp = i;
     
      for(j=0; j<lw; j++)
      {
      	
         if(str[i]==word[j])
            i++;
      }
      chk = i-temp;
      if(chk==lw)
         countW++;
      i = temp;
   }
   printf("\nOccurrence = %d", countW+1);
   getch();
   return 0;
}
