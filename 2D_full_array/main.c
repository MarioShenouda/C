#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x[10]={0,1,2,3,4,5,6,7,8,9};
   int y[2][5];
   int i,j;


   for(i=0;i<2;i++)
      for(j=0;j<5;j++){
            if(i<5){
         y[2][5]= x[10];
        printf("%d  ",y[2][5]);
       }
       else
        {
        y[2][5]=x[5];
        printf("%d  ",y[2][5]);
        }
       }
    return 0;
}
