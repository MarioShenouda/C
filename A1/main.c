#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int durchfluss(int wert);
unsigned int zielpunktes(int x,int y);
float verlustbeiwert();



int main()
{
   int wert,x,y;
   float y_p,x_p,lambda,z,f;
   double alpha,sin ();
   durchfluss(wert);
   zielpunktes(x,y);
   verlustbeiwert(wert);
   printf("Erforderlicher Durchfluss [l/min]:%d ",wert);

   alpha = atan2( y, x );
   printf("\nNeigung [rad]:%f",alpha);

   z=sin (alpha);
   f=tan(alpha);
   y_p= 8.5/ (0.1+ (lambda/z));
   x_p=y_p/f;
   printf("\nx is %.2f y is %.2f",x_p,y_p);

    return 0;
}
int durchfluss(int wert){


printf("Erforderlicher Durchfluss [l/min]: ");
scanf ("%d",&wert);


   if(wert<100||wert>1200){
        while(wert<100||wert>1200){
    printf("Invalide Eingabe! Der Durchfluss muss mindestens 100 l/min und maximal 1200 l/min betragen.\n");
    printf("Erforderlicher Durchfluss [l/min]: ");
    scanf ("%d",&wert);
    wert++;
   }

   }
   else
    printf("Erfordelich Durchfluss [L/min]:\n");

return wert;
}
unsigned  int zielpunktes(int x, int y)
{
    printf("Horizontale Distanz [m]:\n");
    scanf("%d",&x);

    if (x<=0)
        {
        printf("Invalide Eingabe!\n");
    }
    printf("Vertikale Distanz [m]:\n");
    scanf("%d",&y);

    if(y<=0)
        {
        printf("Invalide Eingabe!\n");
    }
    printf("\n\n Ziel:(%d,%d)",x,y);

  return zielpunktes;
}

float verlustbeiwert (wert)
{
    float lambda;

     if(wert<=200){
        printf("\nReibungsbeiwert [bar/m]: 0.001\n");
        lambda=0.001;
    }else if(wert>=201&&wert<=400){
        printf("\nReibungsbeiwert [bar/m]: 0.0025\n");
        lambda=0.0025;
    }else if(wert>=401&&wert<=600){
        printf("\nReibungsbeiwert [bar/m]: 0.005\n");
        lambda=0.005;
    }else if(wert>=601&&wert<=800){
        printf("\nReibungsbeiwert [bar/m]: 0.01\n");
        lambda=0.01;
    }else if(wert>=801&&wert<=1000){
        printf("\nReibungsbeiwert [bar/m]: 0.015\n");
        lambda=0.015;
    }else if(wert>=1001&&wert<=1200){
        printf("\nReibungsbeiwert [bar/m]: 0.025\n");
        lambda=0.025;
    }
    return lambda;
}


