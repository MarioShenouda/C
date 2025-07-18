#include <stdio.h>
#include <stdlib.h>

int main()
{
    //loop=for,while,do while

    //for
    int x ;
    for(x=1;x<=10;x=x+1){
    printf("%d-mario shenouda\n",x);

    //%d with x hatkrarr el x zay ma bayetkrar ma3a el esm
    }
    //while

    int y=1;  // part 1
    while(y<=10)//part2
        { //start of loop
        printf("%d-mario shenouda\n",y);
        y=y+1; //part3 , end of loop

    }
    printf("%d",y);// value of y is the value of the number which ended the loop


    int z=1;
    do{
        printf("mario \n");
        z=z+1;
    }// do while used to be sure the order will used at least one time

    while(z<=10);

 return 0;
}
