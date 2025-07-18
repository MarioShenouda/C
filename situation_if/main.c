#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;// we can give x value as x=5
    int y;// we can give y value as x=6
    int z;

printf("give the value of x: \n");
scanf("%d",&x);

printf("give the value of y: \n");
scanf("%d",&y);

z=x+y;

  while(z!=10){



    if(z>15){//kol el gomal bin {] ba3d if hayetm ta72ehom lo shart if mazbot
        printf("z=%d \n",z);
        printf("you are right\n");
    }
    else{
        printf("z=%d \n",z);
        printf("you are wrong\n");// else use if the condition of if is not true

    }

    printf("give the value of x: \n");
scanf("%d",&x);

printf("give the value of y: \n");
scanf("%d",&y);

z=x+y;
   }
}
