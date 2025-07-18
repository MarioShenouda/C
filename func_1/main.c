#include<stdio.h>
#include<stdlib.h>
short sum (char x,char y);
int main()
{
char a;
char b;
char result=sum(a,b);
printf("give the first number:\n");
scanf("%d",&a);

printf("give the secound number:\n");
scanf("%d",&b);

printf("result is : %d\n",result);

return 0;
}
short sum (char x,char y){
short local_sum;
local_sum=x+y;
return local_sum;
}
