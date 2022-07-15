#include<stdio.h>
int main()
{
     char ch;
     printf("Enter an aplphabet:");
     scanf("%c",&ch);
     if(ch>='a'&&ch<='z')
     {
          printf("Lowercase");
     }
     else if(ch>='A'&&ch<='Z')
     {
          printf("Uppercase");
     }
     else
     {
          printf("It is not an Alphabet");
     }

     return 0;
}
