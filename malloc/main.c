#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text[100];
int i;

printf("string : ");
fgets(*text,100,stdin);


*text=(malloc (10 * sizeof (char*)));

printf(" new string is : %s",*text);
    return 0;
}
