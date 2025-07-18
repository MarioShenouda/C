#include <stdio.h>
#include <stdlib.h>

int main()
{

  // 3ad 3aksyy
    int x;
    for(x=100;x>=0;x--){
    printf(" %d\t",x);
    }

    int y;

   //min 1 le 100 zawgy
    for(y=0;y<=100;y++){
        if(y%2==0)
            printf("\t%d",y);
    }

    int z;
    while(z>=0 ){
            printf("\n give num : ",z);
            scanf("%d",&z);
        if(z %2==1){
            printf(" odd \n");
       }else if (z %2==0)
            printf(" even \n");


    z++;
         printf("\n give num : ",z);
            scanf("%d",&z);
        if(z %2==1){
            printf(" odd \n");
       }else if (z %2==0)
            printf(" even \n");



    }

    return 0;
}
