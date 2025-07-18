#include <stdio.h>
#include <stdlib.h>

int i,characters,capital_alpha=0,small_alpha=0,line=0,alphabet;
int main()
{
char text[150];
char ch[4]={'.','!','?','\0'};


    printf("Bitte Text eingeben: ");
    fgets(text,sizeof(text),stdin);

     for(i=0;text[i]!='\0';i++)
        {
        if (text[i]>='A'&&text[i]<='Z')
            {
               capital_alpha++;
            }
        else if ((text[i]>='a'&&text[i]<='z'))
            {
                small_alpha++;
            }
        else if (text[i]=='.'||text[i]=='?'||text[i]=='!')
            {
                line++;
            }
     }

     alphabet=capital_alpha+small_alpha;
     characters=alphabet+line;

     printf("%d sätze, %d Zeichen \n%d Buchstaben (%d Großbuchstaben, %d Kleinbuchstaben)",line,characters,alphabet,capital_alpha,small_alpha);
return 0;
}
