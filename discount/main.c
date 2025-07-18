#include <stdio.h>
#include <stdlib.h>

int main()
{

int pieces=0;
float price,sum,total;

while(price !=0){

  printf("\ngive the price of the piece :");
  scanf("%f",&price);
  sum+=price;
  pieces++;
  printf("sum is %.2f\n",sum);
  printf("%d pieces\n",pieces);
}
if(pieces==2){
  printf("discount 10%%\n");
  total=sum*0.1;
}
else if(pieces==3){
  printf("discount 20%%\n");
  total=sum*0.2;
}
else if (pieces==4){
  printf("discount 30%%\n");
  total=sum*0.3;
}
else if (pieces==5){
  printf("discount 40%%\n");
  total=sum*0.4;
}
else {
  printf("discount 50%%\n");
  total=sum * 0.5;
}
printf("total is %.2f",total);
printf("\nnumber of pieces is %d",pieces-1);

return 0;
}
