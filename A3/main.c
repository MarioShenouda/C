#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include"framework.h"



typedef struct pairs{
char alpha;
int number;
}pairs;
int countLines(char *filename);
int callPoints (char alpha,char* word);
void helpFunktion();
pairs* wordsPoints();
void draw_board(int ,char *,int *,int ,int ,int ,int,char* );


int main(int argc, char* argv[])
{
  char buff[10],letter='\0',firstword[]={"Scrabble"},*line;
  char** newstring=NULL;
  pairs* keyword=NULL;
  int find_lines=0,index=0,horizontal=0,vertical=0,score=0;
  int counter=0,player=0,ply1_score=0,ply2_score=0,count=0;
  Input input;

  if (argc < 2)
  {
    printf("Usage: %s configfile\n", argv[0]);
    return 1;
  }

  FILE* file = fopen(argv[1], "r");
  if (!file)
  {
    printf("Error: Cannot open file: %s\n", argv[1]);
    return 2;
  }

  fscanf(file,"%s",buff);

  if(strcmp(buff,firstword)!=0)
  {

    printf("Error: Invalid file: %s\n", argv[1]);
    fclose(file);
    return 3;
  }

   find_lines=countLines(argv[1]);
   horizontal=find_lines-5;
   vertical=find_lines-5;

   newstring=(char**) malloc(vertical*sizeof(char*));
   for(index=0;index<vertical;index++)
   {
     newstring[index]=(char*)malloc(sizeof(char)*horizontal+2);
   }
   if(newstring == NULL)
   {
     printf("Error: Out of memory\n");
     return 4;
   }
   fgetc(file); //to not read the \n in the first line
   for(index=0;index<vertical;index++)
   {
       fgets(newstring[index],horizontal+2,file);
   }



  fscanf(file,"%d",&player);

  fgetc(file);

  fscanf(file,"%d",&ply1_score);

  fgetc(file);

  fscanf(file,"%d",&ply2_score);
  fgetc(file);


  pairs charachter;
  while(letter != EOF)
  {
    letter=fgetc(file);
     if(isalpha(letter))
     {
        charachter.alpha=toupper(letter);
        counter++;
     }
     else if(isdigit(letter))
     {
        charachter.number=letter-'0';
     }
    else if(letter==' '||letter == EOF)
    {
      keyword=realloc(keyword,counter*sizeof(pairs));
      keyword[counter-1].alpha=charachter.alpha;
      keyword[counter-1].number=charachter.number;
    }
  }
    // keyword = wordsPoints(argv[1]);
     //printf("alpha = %c number = %d\n",keyword[1].alpha,keyword[1].number);

  fclose(file);

   draw_board( counter,&keyword->alpha,&keyword->number,ply1_score,ply2_score,horizontal,vertical, *newstring);

   printf("\n");
   for(index=0;index < counter;index++)
   {
     printf("%c%d",keyword[index].alpha,keyword[index].number);
     if(index+1 != counter)
     {
       printf(", ");
       count++;
     }
     if((count%9)==0)
     {
      printf("\n");
     }
    }
  printf("\n");
  printf("  P1: %4d Points\n",ply1_score);
  printf("  P2: %4d Points\n",ply2_score);

   printf(" |");
   for (index = 0; index < horizontal; index++)
      printf("%c",'A'+index);
  printf("\n");
    for (index = 0; index < horizontal+2; index++)
    {
      printf("-");
    }
    printf("\n");

      for (index = 0; index < vertical; index++)
      {
        printf("%c|",'A'+index);
        printf("%s",newstring[index]);
      }
    printf("\n");

   while(input.command_ != QUIT)
   {
    printf("Player %d > ",player);
    line=(char*)malloc(sizeof(char)*20);
    if(line == NULL)
   {
     printf("Error: Out of memory\n");
     return 4;
   }
    fgets(line,20,stdin);
    parseCommand(line, &input);

    if (input.command_ == HELP)
    {
      helpFunktion();
     // printf("Player %d > ",player);
    }
    else if(input.command_ == QUIT)
    {
     free(line);
     free(keyword);
     for(index=0;index<vertical;index++)
     {
       free(newstring[index]);
     }
     free(newstring);
      return 0;
    }
    else if(input.command_ == INSERT)
    {
     if(input.is_error_ == true)
     {
       printf("Error: Insert parameters not valid!\n");
     }
     else if (input.is_error_ != true)
     {
       if(isdigit(input.row_)||toupper(input.row_)-'A'>= horizontal)
       {
         printf("Error: Impossible move!\n");
       }
       else if(isdigit(input.column_)||toupper(input.column_)-'A'>= vertical)
       {
         printf("Error: Impossible move!\n");
       }
       for(index=0;index < strlen(input.word_);index++)
       {
         score += callPoints ( keyword[index].alpha, input.word_);
       }

     }
    //printf("%s",input.word_);


    }
    else if(input.command_ == SAVE)
    {
      printf("Fehler beim Speichern");
    }
   /* else if(strcmp(input.command_ ,"\n") == 0)
    {
      continue;
    }*/
    else
    {
      printf("Error: Unknown command:\n");
    }
   }
  free(line);
  //free(keyword);
  for(index=0;index<vertical;index++)
   {
    free(newstring[index]);
   }
   free(newstring);
 return 0;
}
int countLines(char *filename)
{
  // count the number of lines in the file called filename
  FILE *fp = fopen(filename,"r");
  int ch=0;
  int lines=0;

  if (fp == NULL)
  return 0;

  lines++;
  while ((ch = fgetc(fp)) != EOF)
    {
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  return lines;
}
void helpFunktion()
{
   printf("Commands:\n");
   printf(" - insert <ROW> <COLUMN> <H/V> <WORD>\n    <H/V> stands for H: horizontal, V: vertical.\n\n");
   printf(" - help\n    Prints this help text.\n\n");
   printf(" - quit\n    Terminates the game.\n\n");
   printf(" - save\n    Saves the game to the current config file.\n\n");
   printf(" - load <CONFIGFILE>\n    load config file and start game.\n");
}
int callPoints (char alpha,char* word)
{
   int index,number=0;
   for(index=0;index < strlen(word);index++)
   {
     if(word[index] != alpha)
     index++;
     else
     {
       return number;
     }
   }
   return number;
}

 pairs* wordsPoints(char*filename)
{
  char letter='\0';
  int counter=0;
  pairs *keyword;
  FILE *file = fopen(filename, "r");
  pairs charachter;
  while(letter != EOF)
  {
    letter=fgetc(file);
     if(isalpha(letter))
     {
        charachter.alpha=toupper(letter);
        counter++;
     }
     else if(isdigit(letter))
     {
        charachter.number=letter-'0';
     }
    else if(letter==' '||letter == EOF)
    {
      keyword=realloc(keyword,counter*sizeof(pairs));
      keyword[counter-1].alpha=charachter.alpha;
      keyword[counter-1].number=charachter.number;
    }
  }
  fclose(file);
  return  keyword;
}

void draw_board(int counter,char *alpha,int *number,int ply1,int ply2,int hori,int ver,char* newstring)
{
  int index=0;
  int count=0;
 printf("\n");
   for(index=0;index < counter;index++)
   {
     printf("%c%d",alpha[index],number[index]);
     if(index+1 != counter)
     {
       printf(", ");
       count++;
     }
     if((count%9)==0)
     {
      printf("\n");
     }
    }
  printf("\n");
  printf("  P1: %4d Points\n",ply1);
  printf("  P2: %4d Points\n",ply2);

   printf(" |");
   for (index = 0; index < hori; index++)
      printf("%c",'A'+index);
  printf("\n");
    for (index = 0; index < hori+2; index++)
    {
      printf("-");
    }
    printf("\n");

      for (index = 0; index < ver; index++)
      {
        printf("%c|",'A'+index);
        printf("%c",newstring[index]);
      }
    printf("\n");

}

