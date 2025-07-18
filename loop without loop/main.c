
#include "stdio.h"
#include "stdlib.h"

int count = 0;
int money = 41;

void handler() {

    if(count%6==0)
    {
    printf("You have %d Euros and can buy yourself still: %d donut(s)\n",money-count+1,(money+1-count)/6);
      atexit(handler);
      count++;

    }
     else if (count < money)
    {
      count++;
      atexit(handler);
    }

  else if(count == 41 )
  {
  printf("Done! :-)\n");
  }

}

int main(int argc, char **argv) {
    if (argc > 1) money = atoi(argv[1]);
    atexit(handler);
}
