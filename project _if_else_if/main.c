#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);

    while(mark!=-1){

        if(mark>=50&&mark<60){
            printf("passed\n");
        }else if (mark>=60&&mark<90){
        printf("good work\n");
        } else if (mark>=90&&mark<101){
        printf("excellent\n");
        }else if(mark<50){
        printf("you are faild\n");
        }


 printf("enter your mark:");
    scanf("%d",&mark);

    }

  return 0;
}
