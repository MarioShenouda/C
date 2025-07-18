#include <stdlib.h> // für EXIT_SUCCESS
#include <math.h>   // für atan2
#include <stdio.h>  // für printf()

int main()
{
	float x,y,p,z=0.0250,alpha,pnew,y1,ynew,x1,q,f;

	printf("give x and y");
	scanf("%f %f",&x,&y);

	alpha = atan2( y, x );
  printf("alpha is %.4f",alpha);


   q=sin (alpha);
   f=tan(alpha);



	p=10*(0.1*y+(z*(y/q)));
	y1=8.5/ (0.1+ (z/q));
	x1=y1/f;
	ynew=y-y1;

	printf("p is %f",p);

	for (;p<10;p++){
		if (p<10){

			for(p=0;p<10;p++)
      printf("Austrittsdruck Zielpunkt [bar]:%f",pnew);

		}else if (p>=10){

			printf("Austrittsdruck Zielpunkt [bar]:%f",p);

		}
	}

    return 0;
}
