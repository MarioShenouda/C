#include <stdio.h>
#include <stdlib.h>
int find_length(char* string);
int newline(char* text ,int number);
int main()
{
   char *text;
   char x[]={'.','!','?','\0'};
  int i=0,length=0,n=100,nnew,inew=100;

   text=(char*)malloc(sizeof(char)*n);

  printf("text:");


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
printf("%s",text);

length=find_length(text);

  printf("%d\n",length);
 for(i=0;i<length;i++){

  if (text[i] != x[0]||text[length] != x[1]||text[length] != x[2]){
      printf("Kein Satz gefunden!\n");
      }
  else if(text[length-2] != x[0]||text[length-2] != x[1]||text[length-2] != x[2]){
       printf("Der Text endet ohne Satzzeichen!\n");
       }
  else if(text[length]>'\0'){
      printf("Zu wenig Speicher vorhanden!\n");
      }
  else
  printf("ok");
  }
  return 0;
}
int find_length(char* string){
  int length,i;

for (i=0;string[i]!='\0';i++)
      length++;
      return length;
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
