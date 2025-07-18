
#include <stdio.h>
#include <limits.h>
int main ()
{
  int mat_nr = 730398;
  int counter = 2;
  int MAX = 9;

    while (counter <= MAX)
  {
    printf("%10d * %d\n", mat_nr, counter);
      if(mat_nr > INT_MAX / counter)
      {
        printf("An Overflow has occured!\n");
        return 0;
      }
      else
      mat_nr *= counter++;
  }
    counter =2;
    while (counter <= MAX)
   {
     printf ("%10d : %d\n", mat_nr, counter);
     mat_nr /= counter++;
   }
  printf("%10u\n",mat_nr);
  getch();

  return 0;
 }
