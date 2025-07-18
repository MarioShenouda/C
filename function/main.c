#include <stdio.h>
#include <stdlib.h>

//1)prototype
short sum (char x,char y);//char bis 127 , int bis 255
int main()
{
    char a=127;
    char b=126;
    //2)call
    short result=sum(a,b);
    printf("%d",result);
    return 0;
}
//3)impelementition
short sum (char x,char y){
short local_sum ;
local_sum=x+y;
return local_sum;
}
