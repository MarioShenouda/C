#include <stdio.h>
#include <string.h>
int main()
{
    char str1[200];
    char newString[100][100];
    int i,j,ctr;
     

    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);

    j=0; ctr=0;
    for(i=0;str1[i]!='\0';i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]=='.'||str1[i]=='\0'||str1[i]=='?'||str1=='!')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);



    return 0;
}
