#include <stdio.h>
#include <stdlib.h>

int main()
{

    // programme lel 3ad el 3aksy ya3ny lo 5 yeb2a 5+4+3+2+1


    int num,counter,sum=0;//counter is like i

    printf("enter the number:\n");
    scanf("%d",&num);

    counter=1;
    while(counter<=num){
        sum+=counter;//sum=sum+counter
        counter++; //counter=counter+1
    }
    printf("total sum is %d",sum);
    return 0;
}
