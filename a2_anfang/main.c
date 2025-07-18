#include <stdio.h>
#include <stdlib.h>

int main()
{
char *text[200];
char x[]={'t','s','c','p','o','e','\0'},symbol[]={'.','!','?','\0'};
char choose;
int i,capital_alpha=0,small_alpha=0,line=0,alphabet,characters;


text[200]=(char*)malloc(sizeof(char)*200);

printf("Bitte Text eingeben:");
fgets(&text,sizeof text,stdin);

  printf("\nWählen Sie eine Option:\n\n");
  printf("t: Text-Statistik\n");
  printf("s: Zwei Sätze vertauschen\n");
  printf("c: Zwei Sätze verketten\n");
  printf("p: Text mit Zeilennummer ausgeben\n");
  printf("o: Text ohne Zeilennummer ausgeben\n");
  printf("e: Programm beende\n\n");

  printf("Ihre wahl: ",);
  choose=getchar();
  while(choose!=x)
    printf("ihre wahl:");
    if(choose=='t'){
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

    }







    return 0;
}
