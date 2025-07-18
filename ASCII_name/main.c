#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,i;
   printf("please enter your name :");
   scanf("%s",&a);

   int x[a];

   for (i=0;i<a;i++)
    {
       printf("%d %c",a,i);
    }
    return 0;
}
