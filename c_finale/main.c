#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int newline(char* text ,int number);
int find_length(char* string);
int lines_number(char*);
int charachter_sentence(char*);
char* connect_line(char*,char*);
void tab_delet(char*);
char* replace_Characters(char string[]);
char* replace_Character_tab(char string[]);
const char replacement_character[]=". ";
const char replacement_string[] = " und "; //This will be replaced in place of a single character
int  point_reading(char*);
int main()
{
 char *text,wahl='\0';
 char **newstring, string_f[10] ;
 int input=0,jump=0,counter=0 ,length=0,characters=0,capital_alpha=0,small_alpha=0,line=0,alphabet=0,find=0,n;
 int inputnew=100,number=100,m=0,search=0,f=0,symbol=0,other=0,tab=0,v=0,w=0,a,find_lines=0,find_character=0,l=1,k,j;
char  c=strtol(".0",NULL,10);
 printf("Bitte Text eingeben:\n");

 text=(char*)malloc(sizeof(char)*number);

 if(text==NULL)
    {
     free(text);
     return 3;
    }
 while(1)
  {
   fgets(text+input,inputnew,stdin);
   if(newline(text ,number)==1)
   {
    break;
   }
   number=number+100;
   input=input+99;
   text=(char*)realloc(text,sizeof(char)*number);
  }
 length=find_length(text);
 while(search<length)
  {
   if(text[search]=='.'||text[search]=='?'||text[search]=='!')
    {
     symbol++;
    }
   search++;
  }
 if(symbol==0)
  {
   printf("Kein Satz gefunden!\n");
   free(text);
   return 1;
  }
 if(text[length-2]!='.'&&text[length-2]!='!'&&text[length-2]!='?')
  {
   printf("Der Text endet ohne Satzzeichen!");
   free(text);
   return 2;
  }

 find_lines=lines_number(text);

 newstring=(char**) malloc(find_lines*sizeof(char*));
 for(input=0;input<find_lines;input++)
  {
   find = charachter_sentence(text+find_character);
   find_character+=find;
   newstring[input]=(char*)malloc(sizeof(char)*find+1);
  }
 for(input=0;text[input]!='\n';input++)
  {
   if(text[input]=='.')
    {
     newstring[counter][jump]='.';
     newstring[counter][jump+1]='\0';
     tab_delet(newstring[counter]);
     counter++;  //for next sentence
     jump=0;    //for next word, init index to 0
    }
   else if(text[input]=='!')
    {
     newstring[counter][jump]='!';
     newstring[counter][jump+1]='\0';
     tab_delet(newstring[counter]);
     counter++;  //for next sentence
     jump=0;    //for next word, init index to 0
    }
   else if(text[input]=='?')
    {
     newstring[counter][jump]='?';
     newstring[counter][jump+1]='\0';
     tab_delet(newstring[counter]);
     counter++;  //for next sentence
     jump=0;    //for next word, init index to 0
    }
   else
    {
     newstring[counter][jump]=text[input];
     jump++;
    }
  }
 while(1)
  {
   printf("\nW�hlen Sie eine Option:\n");
   printf("  t: Text-Statistik\n");
   printf("  s: Zwei S�tze vertauschen\n");
   printf("  c: Zwei S�tze zusammenketten\n");
   printf("  p: Text mit Zeilennummer ausgeben\n");
   printf("  o: Text ohne Zeilennummer ausgeben\n");
   printf("  e: Programm beenden\n\n");
   while(wahl !='t'&&wahl!='p'&&wahl!='s'&&wahl!='c'&&wahl!='o'&&wahl!='e')
    {
     printf("Ihre Wahl: ");
     wahl=getchar();
     while(getchar()!='\n');
    }

   if(wahl=='p')
    {
     printf(" Nr. | Satz\n");
     printf("-----+----------------------------------------\n");
     for(input=0;input<find_lines;input++)
      {
       printf("%4d | %s\n",l,newstring[input]);
       l++;
      }
     wahl=0, l=1;
    }
   if(wahl=='t')
    {
     for(k=0;k<find_lines;k++)
     {
      for(j=0;j<charachter_sentence(newstring[k]);j++)
       {
        newstring[k][j];
        if (newstring[k][j]>='A'&&newstring[k][j]<='Z')
         {
          capital_alpha++;
         }
        else if (newstring[k][j]>='a'&&newstring[k][j]<='z')
         {
          small_alpha++;
         }
        else if (newstring[k][j]=='.'||newstring[k][j]=='?'||newstring[k][j]=='!')
         {
          line++;
         }
        else if(newstring[k][j]==' ')
         {
          tab++;
         }
        else
        {
         other++;
        }
       }
     }
     alphabet=capital_alpha+small_alpha;
     characters=alphabet+line+other;
     printf("Text Statistik:\n");
     printf("%d S�tze, %d Zeichen\n",line,characters);
     printf("%d Buchstaben (%d Gro�buchstaben, %d Kleinbuchstaben)\n",alphabet,capital_alpha,small_alpha);
     wahl=0;
     alphabet=0;capital_alpha=0;small_alpha=0;
     line=0;other=0;
    }
   if(wahl=='o')
    {
     printf("Text:\n");
     for(input=0;input<find_lines;input++)
      {
       printf("%s",newstring[input]);
       printf(" ");
      }
     printf("\n");
     wahl=0;
    }
   if(wahl=='s')
    {
     do
      {
        printf("Nummer des ersten Satzes: ");
        fgets(string_f,10,stdin);
        f=atoi(string_f);
        a= point_reading(string_f);
        //while(getchar()!='\n');
      }while(f>find_lines||a==1||a==2||f==0);
     do
      {
       printf("Nummer des zweiten Satzes: ");
       a =scanf("%d",&m);
       while(getchar()!='\n');
      }while(m>find_lines||a!=1||m==f);

     char*temp = newstring[f-1];
     newstring[f-1]=newstring[m-1];
     newstring[m-1]=temp;
     wahl=0;
    }
   if(wahl=='c')
    {
     do
      {
       printf("Nummer des ersten Satzes: ");
       a=scanf("%d",&v);
       if(a!=1)
        continue;
       while(getchar()!='\n');
      }while(v>counter);
     do
      {
       printf("Nummer des zweiten Satzes: ");
       a=scanf("%d",&w);
       while(getchar()!='\n');
      }while(w>counter||a!=1||w==v);
     newstring[v-1]=connect_line(newstring[v-1],newstring[w-1]);
     n=w-1;
     while(n<find_lines-1)
      {
       newstring[n]=newstring[n+1];
       newstring[n+1]=NULL;
       n++;
      }
     find_lines=find_lines-1;
     wahl=0;
    }
   if(wahl=='e')
    {
     printf("Programmende!\n");
     return 0;
    }
  }
  for(input=0;input<find_lines;input++)
   {
    free(newstring[input]);
   }
  free(newstring);
  free(text);
  free(text);
 return 0;
}
int newline(char* text,int number )
 {
  int input;
  for(input=0;input<number;input++)
   {
    if(text[input]=='\n')
    return 1;
   }
  return 0;
 }
int find_length(char* string)
 {
  int length=0,input;
  for(input=0;string[input]!='\0';input++)
   length++;
  return length;
 }
int lines_number(char*text)
 {
  int  counter=0,input,length=find_length( text);
  for(input=0;input<length;input++)
   {
    if(text[input]=='.'||text[input]=='!'||text[input]=='?')
     {
      counter++;
     }
   }
  return counter;
 }
int charachter_sentence(char*text)
 {
  int counter=0,input;
  for(input=0;text[input]!='\0';input++)
   {
    counter++;
    if(text[input]=='.'||text[input]=='!'||text[input]=='?')
     {
      return counter;
     }
   }
  return counter;
 }
void tab_delet(char* string)
 {
  int string_array,i;
  string_array=0;
  while(string[string_array]==' '||string[string_array]=='\t'||string[string_array]=='\n')
   {
    string_array++;
   }
  i=0;
  while(string[string_array+i]!='\0')
   {
    string[i]=string[i+string_array];
    i++;
   }
  string[i]='\0';
  i=0;
  string_array=-1;
  while(string[i]!='\0')
   {
    if(string[i]!=' '&&string[i]!='\t'&&string[i]!='\n')//
     {
      string_array=i;
     }
    i++;
   }
  string[string_array+1]='\0';
 }

char* replace_Characters(char string[])
 {
  int input,length=0;

    for(input=0;string[input]!='\0';input++)
       length++;

        //The new string will have 4 more bytes than the original string, as replacement of a single character with
        //5 new characters will require space for 4 extra characters.
        //For example: If the alphabet '.' is to be replaced by " und " , then the resultant string would be
        // " und " here we can see that the string length of the original string was 1 whereas now the string 5 character
        //long, thus requiring 5 more characters.
        char *new_string = (char *)realloc(string,sizeof(char) * (length + 5));
        int  index = length-1;


        //for(i=0;i<length;i++)
        //{
            //If the character which is to be replaced is found, then in the new string 5 characters will be directly copied, then
            //the counter i will be increased so that the copying of the character which is to be replaced is prevented, and then the
            //for loop is terminated.
            //Else the characters will be simply copied

           // if(string[i] == '.'||string[i] == '!'||string[i] == '?')
                //{
                new_string[index++] = replacement_string[0];
                new_string[index++] = replacement_string[1];
                new_string[index++] = replacement_string[2];
                new_string[index++] = replacement_string[3];
                new_string[index++] = replacement_string[4];
                new_string[index++]=  '\0';
                index += 1;
               // break;
              // }
          /*  else {
                new_string[index++] = string[i];

            }

}
        //If there are some characters which are left to be copied, this loop will copy take care of that.
        for(;i<length;i++) {
            new_string[index++] = string[i];
        }*/

        return new_string;
    }


char* connect_line(char*first_string,char*secound_string)
 {
  int  length_secound= 0,index=0,length_first=0,jump=0;
  char *newstring;
 length_secound=find_length(secound_string);

 first_string=replace_Characters(first_string);

 length_first=find_length(first_string);

 newstring=(char*)malloc(sizeof(char)*(length_first+length_secound));

/* first_string=(char*)realloc(first_string,(length_first+length_secound));

    while(secound_string[index] != '\0')
    {
        first_string[length_first] = secound_string[index];
        length_first++;
        index++;
    }
    first_string[length_first+length_secound] = '\0';*/

    /*index = 0;
 while (secound_string[index] != '\0') {
 first_string[length_first+index] = secound_string[index];
 index++;

 }

  first_string[length_first+length_secound] = '\0';*/

  while (first_string[index] != '\0') {
        newstring[jump] = first_string[index];
        index++;
        jump++;
    }

    // Insert the second string in the new string
    index = 0;
    while (secound_string[index] != '\0') {
        newstring[jump] = secound_string[index];
        index++;
        jump++;
    }
    newstring[jump] = '\0';
free(first_string);
free(secound_string);
return newstring;
}

char* replace_Character_tab(char string[]) {
   int input,length=0;
    for(input=0;string[input]!='\0';input++)
       length++;

        //The new string will have 4 more bytes than the original string, as replacement of a single character with
        //5 new characters will require space for 4 extra characters.
        //For example: If the alphabet 'a' is to be replaced by "abc" in "name", then the resultant string would be
        // "nabcme" here we can see that the string length of the original string was 4 whereas now the string 5 character
        //long, thus requiring 4 more characters.

        //char *new_string = (char *)malloc(sizeof(char) * (length + 1));
        char *new_string = (char *)realloc(string,sizeof(char) * (length + 1));

        //index is used to keep track of the new_string insertions
        int i, index = 0;


        for(i=0;i<length;i++) {
            //If the character which is to be replaced is found, then in the new string 3 characters will be directly copied, then
            //the counter i will be increased so that the copying of the character which is to be replaced is prevented, and then the
            //for loop is terminated.
            //Else the characters will be simply copied

            if(string[i] == '.'||string[i] == '!'||string[i] == '?') {
                new_string[index++] = replacement_character[0];
                new_string[index++] = replacement_character[1];
                i += 1;
                break;
            }
            else {
                new_string[index++] = string[i];

            }
     } //If there are some characters which are left to be copied, this loop will copy take care of that.
    for(;i<length;i++)
    {
     new_string[index++] = string[i];
    }
  return new_string;
 }

int point_reading( char *line)
   {
    char *p;
    int l;

    l = strtol( line, &p, 10 );
    if ( p == line )
    {

        return 1;
    }

    while ( *p != '\n' )
    {

        if ( !isspace( (unsigned char)*p ) )
        {

            return 2;
        }

        p++;
    }
    return 0;

   }
