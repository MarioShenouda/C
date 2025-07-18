#include <stdio.h>
int main()
{
    float a,b,c ;

    printf("the first number is :");
    scanf("%f",&a);

    printf("the secound number is :");
    scanf("%f",&b);

    printf("the third number is :");
    scanf("%f",&c);

    if(a>b&&a>c){
            printf("a is the biggest");
        }
    else if(b>a&&b>c){
            printf("b is the biggest");

    }
    if(c>a&&c>b){
            printf("c is the biggest");

    }
}

