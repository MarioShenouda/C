#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,result;
    char Char;

    printf("Insert operation :\n ");
    scanf("%c",&Char);

    printf("Insert the first number : \n ");
    scanf("%f",&num1);

    printf("Insert the secound Number :\n ");
    scanf("%f",&num2);

  while (1){

   switch(Char)
   {
     case '+':
     printf("%.1f + %.1f = %.1f\n",num1,num2,num1+num2);
     break;

     case '-':
     printf("%.1f -%.1f = %.1f\n",num1,num2,num1-num2);
     break;

     case '*':
     printf("%.1f * %.1f = %.1f\n",num1,num2,num1*num2);
     break;

     case '/':
     printf("%.1f / %.1f = %.1f\n",num1,num2,num1/num2);
     break;

     default:
     printf("error");
     break;
   }




}


    return 0;
}
