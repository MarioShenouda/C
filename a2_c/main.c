#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s1[150],s2[150];
   int i, j;

   printf("Enter string: ");
   fgets(s1, sizeof(s1), stdin);

   for(i=0,j=0;s1[i]!='\0';i++)
   {
     if((s1[i]>='A' && s1[i]<='Z')||(s1[i]>='a' && s1[i]<='z')||s1[i]==' ')
     {
        s2[j]=s1[i];
        j++;
     }
   }
   s2[j]='\0';

   printf("Displaying string: %s",s2);

    return 0;
}
