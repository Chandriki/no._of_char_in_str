#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,a=0;
   char str[20],ch;
   printf("enter string:");
   gets(str);
   printf("No. of occurrence of character :");
   scanf("%c",&ch);
   n=strlen(str);
   for(i=0;i<=n;i++)
   {
       if(str[i]==ch)
       {
           a++;
       }
   }
   printf("%d",a);
   return 0;
}
