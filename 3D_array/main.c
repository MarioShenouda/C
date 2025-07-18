#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sum=0;
    int x[3][3][3];

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
           for(k=0;k<3;k++)
              scanf("%d",&x[i][j][k]);
//dah ma3naha en e7na han7ot 27 rakam 3shan kol loop haykhaly el loop el ba3do
//yelf 3 marat ya3ny hayelf 27 mara

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           for(k=0;k<3;k++){
               printf("%d\t",x[i][j][k]);
               printf("\n");
               sum+=x[i][j][k];
               }
             }
           }
           printf("%d",sum);

    return 0;
}
