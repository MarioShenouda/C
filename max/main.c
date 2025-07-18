#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max;

    printf("enter the three numbers: \n");
    scanf("%d %d %d",&x,&y,&z);

    max=x;
    if(y>max)
        max=y;
    if(z>max)
        max=z;

    printf ("the max is %d",max);
    return 0;
}
