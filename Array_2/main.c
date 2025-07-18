#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++){// hena 7atena n 3shan ne3oad dayeman bi 3ad e7na ely no7otoh
        scanf("%f",&a[i]);// lo 7atena hena %d el nateg hayetla3 0
    }
    float result=0;

    for(i=0;i<n;i++){
        result=result+a[i];
    }
    float m=result/n;
    printf("%.2f",m);
    return 0;
}
