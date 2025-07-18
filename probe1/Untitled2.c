#include <stdio.h>
int main()
{
    int a,b,c ;

    printf("the first number is :");
    scanf("%d",&a);

    printf("the secound number is :");
    scanf("%d",&b);

    printf("the third number is :");
    scanf("%d",&c);

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

