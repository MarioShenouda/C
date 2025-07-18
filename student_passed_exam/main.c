#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age[100],array[100],swap,n,c,d,sorting,a;
    char name [50];

    printf("Enter number of Students :");
    scanf("%d",&n);


    //loop for number of students
    for(c=0;c<n;c++){

            //input name&age
            printf("Enter your Name:");
            scanf("%s",name);
            printf("%s Enter your age:",name);
            scanf("%d",&age);
        }

        //selecting sorting methode
        printf("choose sorting (1-bubble,2-insertion,3-merge):\n Please enter number :");
        scanf("%s",&sorting);


        //implementation
        if(sorting==1)
        for(c=0;c<n-1;c++){
            for(d=0;d<n-c-1;d++){
            if (array[d]>array[d+1])
            {
                swap=array[d];
                array[d]=array[d+1];
                array[d+1]=swap;
            }
            }
            }
    printf("sorted student based on their age(ascending):\n");

        for(c=0;c<n;c++){
            printf("%s %d \n",name,age);
        }





    return 0;
}
