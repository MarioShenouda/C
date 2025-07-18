#include <stdio.h>
#include <stdlib.h>



int main(){

  char name[20];
  int i;

  printf("please enter your name : \n");
  scanf("%s",name);

  for(i=0;name[i] != '\0';i++)
  {
    i++;// momken ma7otesh hena ay 7aga bas lo 7atenaha i++ yeb2a lazem ta7t ne7ot i-1 3shan fi el akher benzaoed wa7da zeyada
  }

printf("your name is %s with %d letters",name,i-1);



    return 0;
}
