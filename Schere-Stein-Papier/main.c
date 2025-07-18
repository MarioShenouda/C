#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void welcome_screen();
char options();







int main()
{
    welcome_screen();
    getchar();
    options();
    return 0;
}

void welcome_screen(){
    char character;

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Options: Rock (R,r), Paper (P,p), Scissors (S,s), Quit (Q,q)\n");
    scanf("%c",&character);
}
char options (){
char character;

switch (character){
case 'r':

    printf("%c\n",character);
    break;
case 'p':

    printf("%c\n",character);
    break;
case 's':

    printf("%c\n",character);
    break;
case 'Q':

    printf("%c\n",character);
    break;
default :
    printf("Error !\n");
    break;





}



}
