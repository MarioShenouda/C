#include <stdio.h>
#include <stdlib.h>
char* replace_Characters(char*,char*);
const char replacement_string[]=" und ";
int main()
{

    char *newstring;
    int index = 0, length= 0,i=0,j;
    char *first_string,secound_string[100];
    first_string=(char*)malloc(sizeof(char)*100);
    printf("first string: ");
    fgets(first_string,100,stdin);
    printf("secound_string: ");
    fgets(secound_string,100,stdin);

    first_string = replace_Characters( first_string,'.');

newstring=(char*)malloc(sizeof(char)*100);

 while (first_string[i] != '\n') 
 {
   newstring[j] = first_string[i];
   i++;
   j++;
 }
 // Insert the second string in the new string
 i = 0;
 while (secound_string[i] != '\n') {
 newstring[j] = secound_string[i];
 i++;
 j++;
 }
   for(i=0;newstring[i]!='\0';i++)
    length++;

    newstring[length] = '\0';

    printf("newstring= %s",newstring);



    return 0;
}
char* replace_Characters(char* string,char*replace)
 {
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
