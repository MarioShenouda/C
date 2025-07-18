#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3,mean , x;

    printf("insert the first number : \n");
    scanf("%f",&num1);

    printf("insert the secound number: \n");
    scanf("%f",&num2);

    printf("insert the third number: \n");
    scanf("%f",&num3);

    for (x=0;x!=10;x++){

    mean=(num1+num2+num3)/3;
    printf("mean = %.2f \n",mean);

    if (num1>num2&&num1>num3){
        printf("max = %.2f\n",num1);
    }
    else if(num2>num1&&num2>num3){
        printf("max = %.2f\n",num2);
    }
    else if (num3>num1 && num3>num2){
        printf("max = %.2f\n",num3);
      }
    if (num1<num2&&num1<num3){
        printf("min = %.2f\n",num1);
    }
    else if(num2<num1&&num2<num3){
        printf("min = %.2f\n",num2);
    }
    else if (num3<num1 && num3<num2){
        printf("max = %.2f\n",num3);
      }

    printf("insert the first number : \n");
    scanf("%f",&num1);

    printf("insert the secound number: \n");
    scanf("%f",&num2);

    printf("insert the third number: \n");
    scanf("%f",&num3);
    }

  return 0;
  }
