#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,wert,n=1;
    float alpha,p,z,f,lambda,y_p,x_p,y_p1,x_p1,yn,xn,yp1,xp1,yp2;
    double sin(),tan();

    printf("Erforderlicher Durchfluss [l/min]:");
    scanf("%d",&wert);

    if (wert<100||wert>1200)
        {
            while (wert<100||wert>1200){
         printf("Invalide Eingabe! Der Durchfluss muss mindestens 100 l/min und maximal 1200 l/min betragen.\n");
         printf("Erforderlicher Durchfluss [l/min]:");
         scanf("%d",&wert);
         wert=wert-1;//bei geben falsche wert >1200 oder <0 kommt die durchfluss -1

         wert++;
             }
        }
             printf("Horizontale  Distanz [m]:");
             scanf("%d",&x);


            while(x<=0){
            if(x<=0){
            printf("Invalide Eingabe!\n");
            printf("Horizontale  Distanz [m]:");
            scanf("%d",&x);
            x=x-1;//ohne diese line kommt ziel x-1
        x++;
        }
      }
        printf("Vertikale Distanz [m]:");
        scanf("%d",&y);


            while(y<=0){
            if(y<=0){
            printf("Invalide Eingabe!\n");
            printf("Vertikale Distanz [m]:");
            scanf("%d",&y);
            y=y-1;//ohne diese line kommt ziel y-1
        y++;
        }
      }


      printf("\n\n Ziel:(%d,%d)",x,y);


     alpha=atan2( y, x );
     printf("\nNeigung [rad]: %.4f",alpha);


     printf("\nDurchfluss [l/min]:%d",wert);

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





    z=sin(alpha);
    f=tan(alpha);
    y_p= 8.5/ (0.1+ (lambda/z));
    x_p=y_p/f;

    y_p1=0+y_p;
    x_p1=0+x_p;
    printf("pump1 :(%.2f,%.2f)",x_p,y_p);

    p=10-(0.1*y+lambda*(y/z));


  while(p<6){


            p=10-(0.1*y+lambda*(y/z));
            y_p= 8.5/ (0.1+ (lambda/z));
            x_p=y_p/f;
            yn=y-y_p1;
            xn=yn/f;
            p=10-(0.1*(y-yn)+lambda*((y-yn)/z));
            printf("pump%d :(%.2f,%.2f)\n",n+1,xn,yn);
            yp2=yp1+y_p;
            if(yp2>y){
            printf("Keine zusaetzliche Pumpe notwendig!\n");
            yp2=y;
            }
    }

    return 0;
}
