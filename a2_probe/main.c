#include<stdio.h>
#include<stdlib.h>
int newline(char* text ,int number);
int find_length(char* string);
int lines_number(char*);
int charachter_sentence(char*);
void swap_line(char *first_string,char*secound_string);
void  connect_line(char*,char*);
void tab_delet(char*);
char* replace_Characters(char string[],char replace);
char* replace_Character_tab(char string[],char replace);
const char replacement_character[]=". ";
const char replacement_string[] = " und "; //This will be replaced in place of a single character
int main()
{
 char *text,wahl='\0';
 char **newstring ;
 int i=0,j, counter=0 ,length=0,characters=0,capital_alpha=0,small_alpha=0,line=0,alphabet=0;
 int inew=100,n=100,f=0,m=0,s=0,symbol=0,other=0,tab=0,v,w,find_lines=0,find_character=0,find=0;



 text=(char*)malloc(sizeof(char)*n);


  printf("Bitte Text eingeben:\n");




  while(1){
        fgets(text+i,inew,stdin);

      if(newline(text ,n)==1)
            {
            break;
        }
        n=n+100;
        i=i+99;
        text=(char*)realloc(text,sizeof(char)*n);

    }

length=find_length(text);


while(s<length)
 {
  if(text[s]=='.'||text[s]=='?'||text[s]=='!')
  {
     symbol++;

  }
s++;
 }

  if(symbol==0){
    printf("Kein Satz gefunden!\n");
    return 1;

}


  if(text[length-2]!='.'&&text[length-2]!='!'&&text[length-2]!='?')
  {
    printf("Der Text endet ohne Satzzeichen!");
    return 2;
  }

find_lines=lines_number(text);

newstring=(char**) malloc(find_lines*sizeof(char*));
   for(i=0;i<find_lines;i++)
    {
      find = charachter_sentence(text+find_character);
      find_character+=find;
      newstring[i]=(char*)malloc(sizeof(char)*find+1);
    }


  for(i=0;i<=length;i++)
    {
        if(text[i]=='\0')
        {
            newstring[counter][j]='\0';
            tab_delet(newstring[counter]);
            counter++;  //for next sentence
            j=0;    //for next word, init index to 0
        }
        else  if(text[i]=='.')
        {
            newstring[counter][j]='.';
            tab_delet(newstring[counter]);
            counter++;  //for next sentence
            j=0;    //for next word, init index to 0
        }
        else if(text[i]=='!')
        {
            newstring[counter][j]='!';
           tab_delet(newstring[counter]);
            counter++;  //for next sentence
            j=0;    //for next word, init index to 0
        }
        else if(text[i]=='?')
        {
            newstring[counter][j]='?';
            tab_delet(newstring[counter]);
            counter++;  //for next sentence
            j=0;    //for next word, init index to 0
        }
        else
        {
            newstring[counter][j]=text[i];
            j++;
        }
    }

while(1){
  printf("\nWählen Sie eine Option:\n");
  printf("  t: Text-Statistik\n");
  printf("  s: Zwei Sätze vertauschen\n");
  printf("  c: Zwei Sätze zusammenketten\n");
  printf("  p: Text mit Zeilennummer ausgeben\n");
  printf("  o: Text ohne Zeilennummer ausgeben\n");
  printf("  e: Programm beenden\n\n");

  while(wahl !='t'&&wahl!='p'&&wahl!='s'&&wahl!='c'&&wahl!='o'&&wahl!='e'){
  printf("Ihre Wahl: ");
  wahl=getchar();
  while(getchar()!='\n');
}

  if(wahl=='p'){

    printf(" Nr. | Satz\n");
    printf("-----+----------------------------------------\n");
    for(i=0;i<counter-1;i++){
        printf("   %d | %s\n",i+1,newstring[i]);
        text=newstring[i];
}
        wahl=0;
}

   if(wahl=='t')
  {
    for(i=0;text[i]!='\0';i++)
     // for(i=0;i<length;i++)
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
        else if(text[i]==' '||text[i]=='\n')
        {
          tab++;
        }
        else
        {
            other++;
        }
     }
     alphabet=capital_alpha+small_alpha;
     characters=alphabet+line+other;
     printf("Text Statistik:\n");
     printf("%d Sätze, %d Zeichen\n%d Buchstaben (%d Großbuchstaben, %d Kleinbuchstaben)\n",line,characters,alphabet,capital_alpha,small_alpha);
     //for(i=0;i<counter-1;i++){
       // text=newstring[i];
//}

     wahl=0;
     alphabet=0;capital_alpha=0;small_alpha=0;
     line=0;other=0;
  }
   if(wahl=='o')
  {

   printf("Text:\n");
      for(i=0;i<counter-1;i++){
        text=newstring[i];
        text=replace_Character_tab( text, '.');
        printf("%s",text);
          }

     wahl=0;
  }
   if(wahl=='s')
  {
    do
        {
         printf("Nummer des ersten Satzes: ");
            scanf("%d",&f);
           //f=getchar();
          while(getchar()!='\n');
        }while(f>=counter);

    do
        {
         printf("Nummer des zweiten Satzes: ");
         scanf("%d",&m);
            // m=getchar();
            while(getchar()!='\n');
        }while(m>=counter);



     swap_line(newstring[f-1],newstring[m-1]);

    for(i=0;i<counter-1;i++){
        text=newstring[i];
    }
    wahl=0;
  }
   if(wahl=='c')
  {
   do{
     printf("Nummer des ersten Satzes:");
     scanf("%d",&v);
    }while(v>=counter);
    do{
     printf("Nummer des zweiten Satzes:");
     scanf("%d",&w);
     }while(w>=counter);
      connect_line(newstring[v-1],newstring[w-1]);
      for(i=0;i<counter-1;i++){
        text=newstring[i];
        printf("%s",text);
}
    wahl=0;
  }
   if(wahl=='e'){
  printf("Programmende!\n");
  return 0;
  }
}
 return 0;
}
int newline(char* text,int number )
{
    int i;
 for(i=0;i<number;i++){
    if(text[i]=='\n')

        return 1;
 }
 return 0;
}
int find_length(char* string){
  int length=0,i;

 for(i=0;string[i]!='\0';i++)
      length++;

 return length;
}
void swap_line(char *first_string,char*secound_string){
//if(first_string == NULL || secound_string == NULL)
        //return;
    /* Initialize it to first character index of both string */
    int first_array = 0, second_array = 0;
    char temp;
    /* Starting from array 0, keep on swapping characters
     using a temporay char variable temp*/
    while(first_string[first_array] != '\0' && secound_string[second_array] != '\0') {
        temp = first_string[first_array];
        first_string[first_array] = secound_string[second_array];
        secound_string[second_array] = temp;
        first_array++;
        second_array++;
    }
    if(first_string[first_array] == '\0'){
        /* If first_string ends before second_string, copy the remaining
          characters of second_string into first_string */
        first_string[first_array++] = secound_string[second_array];
        secound_string[second_array++] = '\0';
        while(secound_string[second_array] != '\0'){
            first_string[first_array++] = secound_string[second_array++];
        }
        first_string[first_array] = '\0';
    } else {
        /* If second_string ends before first_string, copy the remaining
          characters of first_string into second_string */
        secound_string[second_array++] = first_string[first_array];
        first_string[first_array++] = '\0';
        while(first_string[first_array] != '\0'){
            secound_string[second_array++] = first_string[first_array++];
        }
        secound_string[second_array] = '\0';
    }

}
void connect_line(char*first_string,char*secound_string){

    int i=0,j=0;
   char *newstring=NULL;

   //swap_line(first_string,secound_string);

  while (first_string[i] != '\0') {
        if(first_string[i]=='.')
        first_string[i]=' ';
        newstring[j] = first_string[i];
        newstring[j] =  replace_Characters(first_string,'.');
  i++;
  j++;
 }

   first_string =  replace_Characters(first_string,'.');

 i=0;
 while(secound_string[i]!='\0'){
   newstring[j]=secound_string[i];
   i++;
   j++;
 }
newstring[j]='\0';

}
void tab_delet(char* string)
{
   int string_array,i;
    string_array=0;
    while(string[string_array]==' '||string[string_array||string[string_array]=='\n']=='\t')//
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
    char* replace_Characters(char string[],char replace) {
       int input,length=0;
       for(input=0;string[input]!='\0';input++)
       length++;

        //The new string will have 4 more bytes than the original string, as replacement of a single character with
        //5 new characters will require space for 4 extra characters.
        //For example: If the alphabet 'a' is to be replaced by "abc" in "name", then the resultant string would be
        // "nabcme" here we can see that the string length of the original string was 4 whereas now the string 5 character
        //long, thus requiring 4 more characters.
        char *new_string = (char *)malloc(sizeof(char) * (length + 5));

        //index is used to keep track of the new_string insertions
        int i, index = 0;


        for(i=0;i<length;i++) {
            //If the character which is to be replaced is found, then in the new string 3 characters will be directly copied, then
            //the counter i will be increased so that the copying of the character which is to be replaced is prevented, and then the
            //for loop is terminated.
            //Else the characters will be simply copied

            if(string[i] == replace) {
                new_string[index++] = replacement_string[0];
                new_string[index++] = replacement_string[1];
                new_string[index++] = replacement_string[2];
                new_string[index++] = replacement_string[3];
                new_string[index++] = replacement_string[4];
                i += 1;
                break;
            }
            else {
                new_string[index++] = string[i];

            }
        }

        //If there are some characters which are left to be copied, this loop will copy take care of that.
        for(;i<length;i++) {
            new_string[index++] = string[i];
        }

        return new_string;
    }
char* replace_Character_tab(char string[],char replace) {
   int input,length=0;
    for(input=0;string[input]!='\0';input++)
       length++;

        //The new string will have 4 more bytes than the original string, as replacement of a single character with
        //5 new characters will require space for 4 extra characters.
        //For example: If the alphabet 'a' is to be replaced by "abc" in "name", then the resultant string would be
        // "nabcme" here we can see that the string length of the original string was 4 whereas now the string 5 character
        //long, thus requiring 4 more characters.
        char *new_string = (char *)malloc(sizeof(char) * (length + 1));

        //index is used to keep track of the new_string insertions
        int i, index = 0;


        for(i=0;i<length;i++) {
            //If the character which is to be replaced is found, then in the new string 3 characters will be directly copied, then
            //the counter i will be increased so that the copying of the character which is to be replaced is prevented, and then the
            //for loop is terminated.
            //Else the characters will be simply copied

            if(string[i] == replace) {
                new_string[index++] = replacement_character[0];
                new_string[index++] = replacement_character[1];
                i += 1;
                break;
            }
            else {
                new_string[index++] = string[i];

            }
        }

        //If there are some characters which are left to be copied, this loop will copy take care of that.
        for(;i<length;i++) {
            new_string[index++] = string[i];
        }

        return new_string;
    }
int lines_number(char*text){

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
int charachter_sentence(char*text){

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
