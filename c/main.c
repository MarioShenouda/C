#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,n=1;
  float p,alpha=0,lambda=0.0025,pump0,deltay,deltax,ynew,xnew,yp1,xp1,yp0=0,yp2;
  double sin(),tan();


  printf("give x and y:");
  scanf("%d",&x);
  scanf("%d",&y);


  deltay=8.5/(0.1+(lambda/sin(alpha)));
  deltax=deltay/tan(alpha);
  p=10-(0.1*y+lambda*(y/sin(alpha)));
  printf("p is %f",p);


  yp1=yp0+deltay;


  if (p<6){
    while (p<6){

        ynew=y-deltay;
        p=10-(0.1*ynew+lambda*(ynew/sin(alpha)));
        printf("p ziel is %f",p );

        if(p<6){
                yp2=yp1+deltay;
                if(y<yp2){
                    yp2=y;
                }
                ynew=y-yp2;
            p=10-(0.1*ynew+lambda*(ynew/sin(alpha)));
            printf("p ziel is %.2f",p );
      p++;
        }
    }
  }
 if (p>=6){
    printf("no pumpe");
}

    return 0;
}
