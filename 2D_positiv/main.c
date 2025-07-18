#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,sum=0;


  printf("please enter the numbers of array : ");
  scanf("%d %d",&a,&b);
  int x[a][b];

  for(i=0;i<a;i++)
    for(j=0;j<b;j++){
     printf("enter the numbers of array : ");
     scanf("%d",&x[i][j]);
     }

  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
     if(x[i][j]>0)
     printf("%d  ",x[i][j]);


    }
  }



    return 0;
}
