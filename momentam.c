#include <stdio.h>
  int main(){
   char ch;
   printf("enter character:");
   scanf("%c", &ch);

   if ((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z'))
   {
    printf("%c is character",ch);
   }
   else if (ch>='0'&& ch<='9')
   {
    printf("%c is digital",ch);
   }
   else{
        printf("%c is spacial character",ch);
   }
   return 0;
  }