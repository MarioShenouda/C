#include <stdio.h>
#include <stdlib.h>

void drink_choose(int select);
void welcome_screen();
int menu();
int main()
{

    int select,confirm,cup,pay;


    welcome_screen();
    getchar();
    select=menu();
    drink_choose(select);


    if(select>0 && select<5){

        printf("Press 1 to confirm or 2 to cancel\n");
        scanf("%d",&confirm);
        if(confirm==1){
        printf("how many Cups(Max 5)\n");
        scanf("%d",&cup);

        if (cup>=1||cup<6){
            printf("pleas pay: %d",pay);


        }else{
        printf("ERROR!");
        }

        }else {
        printf("Good Bye!");
        }

    }else {

    printf("ERROR!");
    }


    return 0;
}
void welcome_screen(){//etba3 nafs el function bas men ghear el ;

printf("\t\t\t\tWelcome to the Coffe Maker\n");
printf("\t\t\t\tPress any key to countinue\n");
printf("\t\t\t\t---------------------------\n");
}

int menu(){
    int select;
    printf("#####################\n");
    printf("\tMenu\n");
    printf("#####################\n\n");

    printf("1]Cappucino");     printf("\t2 Euro\n");
    printf("2]Esperso");       printf("\t1 Euro\n");
    printf("3]Americano");     printf("\t3 Euro\n");
    printf("4]Caffelatte");    printf("\t4 Euro\n");
    printf("5]Exit!\n");
    printf("####################\n");

    printf("Select your choice:");
    scanf("%d",&select);

    return select;
}

void drink_choose(int select){
    switch(select){

    case 1:
    printf("You have selected Cappucino"); printf("\t2 Euro\n");
    break;

    case 2:
    printf("You have selected Esperso"); printf("\t1 Euro\n");
    break;

    case 3:
    printf("You have selected Americano"); printf("\t3 Euro\n");
    break;

    case 4:
    printf("You have selected CaffeLatte"); printf("\t4 Euro\n");
    break;

    case 5:
    break;

    default:
    printf("Error!,Please try again");

    }






}
