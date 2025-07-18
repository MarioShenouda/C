#include <stdio.h>
#include <stdlib.h>
int i,j,sum=0,a,b,n;
int main()
{


printf("entrer the size of first array :");
scanf("%d",&a);

printf("enter the size of secound array :");
scanf("%d",&b);

int x[a][b];


for(i=0;i<a;i++)
   for(j=0;j<b;j++)
        scanf("%d",&x[i][j]);

n=x[0][0];


for(i=0;i<a;i++){
   for(j=0;j<b;j++){

      if(n<x[i][j]) {

         n=x[i][j];
         }
          }
      }
      printf("\n");

         printf("%d\t = found",n);

    return 0;
}
