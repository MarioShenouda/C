#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0;

   for(i='a';i<='z';i++)
    {
        printf("%c %d \n",i,i);
        sum++;
    }

    printf("sum is %d",sum);
    return 0;
}
