#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int x[]={8,10,13,11,20,22}; another way to write the array
    int x[6]={8,10,13,11,20,22};
    int y,sum,ava;

   sum=0;
   int j;
   for(j=0;j<6;j++)
    sum+=x[j];
   printf("sum=%d\n",sum);


   ava=sum/6;
   printf("ava = %d\n",ava);

   int i;
   for(i=0;i<6;i++){
    printf("bestellung[%d]=%d\n",i+1,x[i]);

   }

   int d[6];
   int r=0;
   for(r=0;r<6;r++){
    printf("Enter the value of bestellung [%d]\n",r+1);
    scanf("%d",&d[r]);
   }
}
