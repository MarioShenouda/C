#include <stdio.h>
#include <stdlib.h>

void welcome_screen() ;
int menu();
void game();
void choose(int select);
int pay(select);

int main()
{
    int select,money;
    welcome_screen();
    getchar();
    select=menu();
    choose(select);
    if(select>0&&select<5){
    game();
}
    pay(select);



    return 0;
}
void welcome_screen(){
printf("\t\t\t\t\t\twelcome\n");
printf("\t\t\t\tplease presse enter to countinue\n");
printf("\t\t\t\t--------------------------------\n");
}

int menu(){
    int select;
printf("##############\n");
printf(" menu\n");
printf("##############\n\n");

printf("1] Cocacola");              printf("\t 2 Euro\n");
printf("2] Orangen saft");          printf("\t 2 Euro \n ");
printf("3] Ice Tea");               printf("\t 3 Euro \n");
printf("4] Bier");                  printf("\t\t 4 Euro \n");
printf("5] Exit");

printf("\nselect your choice :");
scanf("%d",&select);

return select;

}
void choose(int select){

switch(select){

case 1:
    printf("you have selected Cocacola\n");
    break;
case 2:
    printf("you have selected Orangen Saft\n");
    break;
case 3:
    printf("you have selected Ice Tea\n");
    break;
case 4:
    printf("you have selected Bier\n");
        break;
case 5:
    printf("EXITING....\n");
    break;

default:
    printf("ERROR.... Please Try Again\n");




}

}

void game(){
    int select, confirm,cup;



{

        printf("please presse 1 to confirm or any key to cancel : ");
        scanf("%d",&confirm);
           if(confirm==1){
            printf("please Insert how many cup :");
            scanf("%d",&cup);
                if (cup>=1&&cup<6){
                    printf("Thanke you for your choice :)\n");


            }else if (cup>=6||cup<=0){
            printf("please try Again");
            }
           }else if(confirm!=1)
           printf("Bye Bye :)");

    }


}

int pay(select){

int cup;

switch(select){

case 1:
    printf("Please pay  %d Euro",cup*2);
    break;
case 2:
    printf("please pay %d Euro",cup*2);
    break;
case 3:
    printf("Please pay %d Euro",cup*3);
    break;
case 4:
    printf("pleae pay %d Euro",cup*4);
    break;
default:
    printf("ERROR!");
    break;
}
}






