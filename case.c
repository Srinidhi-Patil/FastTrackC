#include<stdio.h>
void main()
{
   char ch;
   printf("Please enter an alphabet : ");
   scanf("%c", &ch);
   if('a' <=  ch && ch <= 'z')
   {
      printf("Upper case of %c is %c", ch, ch-32);
   }
   if('A' <=  ch && ch <= 'Z')
   {
      printf("Lower case of %c is %c", ch, ch+32);
   }
 
}
