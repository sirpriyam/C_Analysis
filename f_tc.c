#include <stdio.h>
#include <string.h>
#define MAX 101
int main()
{
   char s[MAX];
   scanf("%s",s);
   int odd = 0;
   int even=0;
   int i = 0;
   for (i = 0; i < strlen(s); i++) 
   {
       if(i%2==0)
       {
           odd+= s[i] - 48;
       }
       else
       {
           even+=s[i]-48;
       }
   }
   printf("%d",odd-even);

   return 0;
}
