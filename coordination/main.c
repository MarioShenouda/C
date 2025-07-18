#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x=150,y=100,n=2;
    double pump0(x,y),sin(),tan();
    float p,alpha=0.5880,lambda,delta_y,delta_x,yp1,xp1,xneu,yneu,pneu,yp2,xp2,pziel;

    lambda=0.025;

    delta_y=8.5/(0.1+(lambda/sin(alpha)));
    delta_x=delta_y/tan(alpha);
    p=10-(0.1*y+lambda*(y/sin(alpha)));
    printf("p is :%f",p);
    printf("y is %f",delta_y);


    yp1=0+delta_y;
    xp1=0+delta_x;

    printf("pump1(%.2f,%.2f)",delta_x,delta_y);


        while (pneu<6){
        if (pneu<6){

        yneu=y-yp1;
        xneu=yneu/tan(alpha);
        pneu=10-(0.1*yneu+lambda*(yneu/sin(alpha)));
        printf("p neu is %f",pneu);
        printf("pump %d (%f,%f)",n++,xneu,yneu);
        yp2=yp1+delta_y;
        xp2=yp2/tan(alpha);
        if(yp2>y){
            printf("keine zusaetliche Pumpe notwendig!\n");
            yp2=y;
            printf("pump %d :(%f %f)",n+2,x,y);
        }else {
              pziel=10-(0.1*yp2*lambda+(yp2/sin(alpha)));
              printf("pump : %d(%f,%f)",n+2,xp2,yp2);

        }
     }
    else{
    printf("Keine zusaetzliche Pumpe notwendig!\n");

    }

}
   return 0;
}
