#include <stdio.h>
#include <stdlib.h>


int main()
{

    char text[100],choose[]={'t','s','c','p','o','e','\0'},wahl;
    int i,characters=0,capital_alpha=0,small_alpha=0,line=0,alphabet=0;


    printf("Bitte Text eingeben: ");
    gets(text);


  printf("\nW�hlen Sie eine Option:\n\n");
  printf("t: Text-Statistik\n");
  printf("s: Zwei S�tze vertauschen\n");
  printf("c: Zwei S�tze verketten\n");
  printf("p: Text mit Zeilennummer ausgeben\n");
  printf("o: Text ohne Zeilennummer ausgeben\n");
  printf("e: Programm beende\n\n");

  printf("Ihre wahl: ");
  scanf("%c",&wahl);


  if(wahl=='e')
    {
     printf("programme bendeen\n");
    }

   else if(wahl=='t')
    {
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

     printf("%d s�tze, %d Zeichen \n%d Buchstaben (%d Gro�buchstaben, %d Kleinbuchstaben)",line,characters,alphabet,capital_alpha,small_alpha);
    }

    else if(wahl=='s')
    {

    }
  else if(wahl=='c')
    {

    }
 else if(wahl=='p')
    {
        printf("Nr.  | satz\n");
        printf("-----+-------------------\n");
        for(i=0;text[i]!='.';i++)
        printf("%d   |%s\n",i+1,text);

    }
  else if(wahl=='o')
    {
      printf("%s",text);
    }
    return 0;
}
