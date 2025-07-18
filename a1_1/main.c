#include <stdio.h>
#include <stdlib.h>
#include<math.h>

double coordination(double x,double y);

int main()
{

    coordination(double x,double y);
    printf("p is%f",p);
    return 0;
}

double coordination(double x,double y)
{

double deltay,deltax,lambda=0.025,alpha=0.5880,p;

deltay=8.5/(0.1+(lambda/(sin(alpha))));

deltax=deltay/tan(alpha);

for(p=0;p<6;p++){
    p=10-(0.1*y+lambda*(y/sin(alpha)));
    printf("p ziel is %f",p);
}

return 1;

}
