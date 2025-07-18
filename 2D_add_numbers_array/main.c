#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,i,j,sum=0;//lo el sum mesh be 0 hayeb2a fi garbish variables


  printf("please enter the numbers of array : ");
  scanf("%d %d",&a,&b);
  int x[a][b];//lo el int x et7atet fo2 hayedeny synrtax erorr

  for(i=0;i<a;i++)
    for(j=0;j<b;j++){
     printf("enter the numbers of array : ");
     scanf("%d",&x[i][j]);
     }

  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
     printf("%d  ",x[i][j]);
     sum+=x[i][j];

    }
  }

 printf("\n sum is %d",sum);





    return 0;
}
