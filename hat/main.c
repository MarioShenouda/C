#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x=200000,y=1,n=1;
    double yp,xp,lambda=0.0025,alpha=0.0000,ynew,deltax,deltay,p,ypneu,yp1,xp1,xnew;

    deltay=8.5/(0.1+(lambda/sin(alpha)));
    deltax=deltay/tan(alpha);




while (p<6){

             ynew=deltay*n;
             xnew=deltax*n;


             if(ynew>y){
                ynew=y;
                xnew=x;
             }
             yp1=y-ynew;
             p=10-(0.1*yp1+lambda*(yp1/sin(alpha)));

             printf("pumpe (%lf,%lf)",xnew,ynew);

     n++;


     }










    return 0;
}
