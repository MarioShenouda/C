#include <stdio.h>
#include <stdlib.h>
int foo();
int whii();
int dodo_whi();
int main()
{
    foo();
    whii();
    dodo_whi();
    return 0;
}

int foo(){

int x;
for(x=0;x<=100;x++){
    printf("|%d\t is %c\t|",x,x);
}

}

int whii(){
int x;
 x=0;
while(x<=100){
    printf("%d is smaller than 101\n",x);

    x++;
}



}

int dodo_whi(){

int z;
do{
        printf("%d will be at least one time hier\n",z);

}
while(z<=100);



}
