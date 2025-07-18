#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[]={'a','b','c','d','e'};
    char name;
    float degree,result,y;
    float sum=0;


    printf("Enter your Name : ");
    scanf("%s",&name);


    for(y=0;y<5;y++)
        {
            if(y!=5){

        printf("%c \n",x);
        scanf("%c",&x);
        printf("your degree is : \n");
        scanf("%f",&degree);
        }
}


    sum=sum+degree;
    sum+=sum;

    printf("the sum of all degrees is = %.2f \n",sum);

    result=sum/5;
    printf("the result is %.2f",result);



    return 0;
}
