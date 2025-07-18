#include <stdio.h>
#include <stdlib.h>


int main()
{

    char text[200],choose[]={'t','s','c','p','o','e','\0'},wahl;
    char newstring[100][100];
    int i,j,m,counter=0,length=0,characters=0,capital_alpha=0,small_alpha=0,line=0,alphabet=0;



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

  printf("Ihre wahl: ");
  wahl=getchar();


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

     printf("%d sätze, %d Zeichen \n%d Buchstaben (%d Großbuchstaben, %d Kleinbuchstaben)",line,characters,alphabet,capital_alpha,small_alpha);
    }

   else if(wahl=='p')
    {
       for(i=0;text[i]!='\0';i++)
    {
      if(text[i]=='.'||text[i]=='\0'||text[i]=='?'||text[i]=='!')
        {
            newstring[counter][j]='\0';
            counter++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newstring[counter][j]=text[i];
            j++;
        }
    }
    printf("Nr.  | satz\n");
    printf("-----+-------------------\n");
    for(i=0;i < counter;i++)
        printf(" %d | %s \n" ,i+1,newstring[i]);

    }
  else if(wahl=='o')
    {
      printf("%s",text);
    }

    else if(wahl=='s')
    {

    }
  else if(wahl=='c')
    {

    }
    return 0;
}

