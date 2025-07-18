#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmi , koerpergewicht,koerpergroesse;

    printf("Bitte geben Sie Ihr Gewicht in kg ein:\n");
    scanf("%f",&koerpergewicht);

    printf("Bitte geben Sie Ihre Koerpergroeﬂe in cm ein:\n");
    scanf("%f",&koerpergroesse);

      bmi =koerpergewicht/(koerpergroesse/100.*koerpergroesse/100.);
     printf("BMI =       %.1f \n",bmi);


     for(bmi=1;bmi<=10;bmi++){

    if(bmi<16.0){
        printf("Starkes Untergewicht\n");
    }else if(bmi>=16&&bmi<17){
        printf("M‰ﬂiges Untergewicht\n");
    }else if(bmi>=17&&bmi<18.5){
        printf("Leichtes Untergewicht\n");
    }else if(bmi>=18.5&&bmi<25){
        printf("Normalgewicht\n");
    }else if(bmi>=25&&bmi<30){
        printf("Pr‰adipositas\n");
    }else if(bmi>=30&&bmi<35){
        printf("Adipositas Grad I\n");
    }else if(bmi>=35&&bmi<40){
        printf("Adipositas Grad II\n");
    }else if(bmi>=40){
        printf("Adipositas Grad III\n");
    }

    printf("------------------------------------------------\n");

    printf("Bitte geben Sie Ihr Gewicht in kg ein:\n");
    scanf("%f",&koerpergewicht);

    printf("Bitte geben Sie Ihre Koerpergroeﬂe in cm ein:\n ");
    scanf("%f",&koerpergroesse);

      bmi =koerpergewicht/(koerpergroesse/100.*koerpergroesse/100.);
     printf("BMI =       %.1f \n",bmi);

}
    return 0;
}
