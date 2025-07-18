#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void welcome_screen();
int termin();
int main()
{
    welcome_screen();
    getchar();
    termin();
    return 0;
}
void welcome_screen(){
printf("\t\t\t\t\t***********************************\n");
printf("\t\t\t\t\t*  Welcome To the Termin Kalender *\n");
printf("\t\t\t\t\t*    press any key to countinue   *\n");
printf("\t\t\t\t\t***********************************\n");
}
int termin(){
    char customer,day;
    int phone_number;
    float time;
printf("Enter the name of the customer: ");
scanf("%s",&customer);
printf("give the phone number:");
scanf("%d",&phone_number);
printf("give the time to visit:");
scanf("%d",time);
printf("give the day to visit:");
scanf("%s",day);
return termin ;
}
