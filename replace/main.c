
#include <stdio.h>
#include<stdlib.h>

char* concatenateString(char *, char *);
int main(){
    char destination[100], source[100];
    printf("Enter first string \n");
    fgets(destination,100,stdin);
    printf("Enter second string \n");
    fgets(source,100,stdin);

    concatenateString(destination, source);

    printf("Concatenated String: \n%s ", destination);

    return 0;
}

/*
 * Concatenates source at the end of destination string
 */
char* concatenateString(char *destination, char *source){
    if( destination ==NULL ||  source==NULL ){
        return NULL;
    }
     int length=0,i;
     char *x=" und ";

      for(i=0;destination[i]!='\n';i++){
         length++;

        if(destination[i]=='.'){

         while(*x!='\0')
            x++;
         destination[i]=x;
      }
      }

    int index = 0;
    while(source[index] != '\0'){
        destination[length] = source[index];
        length++;

        index++;

    }

    destination[length] = '\0';
    return destination;
      }
