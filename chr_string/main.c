#include <stdio.h>

int main()
{
    // C Program to concatenate
    // two strings without using strcat
 // Getting the two Strings to be concatenated
 char string1[100] , string2[100],string4[7]=" und ";

 // Declare a new Strings
 // to store the concatenated String
 char string3[100];

 int i = 0, j = 0,k=0;

    //Printing string one and two
 printf("First string is : ");
 fgets(string1,100,stdin);
 printf("Second string is : ");
 fgets(string2,100,stdin);

 // Insert the first string in the new string
 while (string1[i] != '\0') {
        if(string1[i]=='.')
        string1[i]=' ';
 string3[j] = string1[i];
 i++;
 j++;
 }
 i=0;
 while(string4[i] !='\0'){
    string3[j]=string4[i];
    i++;
    j++;
 }

 // Insert the second string in the new string
 i = 0;
 while (string2[i] != '\0') {
 string3[j] = string2[i];
 i++;
 j++;
 }
 string3[j] = '\0';

 // Print the concatenated string
 printf("Concatenated string: %s", string3);

 return 0;
}
