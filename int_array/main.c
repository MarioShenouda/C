#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int array even,odd
    int arr[10];

    printf("insert the num\n");

int x;
    for(x=0;x<10;x++){//x=0 because array begin with 0 not with 1
        scanf("%d",&arr[x]);// the value of x is the same value of the array
    }
    for (x=0;x<10;x++){
        printf("%d\t",arr[x]);

        if(x%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
        }
    return 0;
}
