#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    printf("enter the numbers of lines : ");
    scanf("%d",&x);



    for(i=1;i<=x;i++){
            for(j=1;j<=i;j++){
        printf("* ");
     }
    printf("\n");
    }
    return 0;
}
