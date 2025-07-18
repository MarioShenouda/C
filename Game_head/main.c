#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c,e;
    char Char;

    printf("choose one..... \nstart game=a \nOption=b\nAbout Game=c\nExit Game=d\n");
    scanf("%s",&Char);

  if(Char=='a')
  printf("Game is Starting\n");
  else if(Char=='b'){
  printf("Sound\ngraphic\nMouse\nkeyboard\n");
  }else if(Char=='c'){
  printf("this game is devoloped by Mario\n");
  }else if (Char=='e'){
  printf("game is exiting\n");
  }else
  printf("Error...... Try again!\n");
  return 0;
}
