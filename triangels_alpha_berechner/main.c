#include <stdlib.h> // f�r EXIT_SUCCESS
#include <math.h>   // f�r atan2
#include <stdio.h>  // f�r printf()

#define PI 3.141592654

int main( void )
{
  double alpha, degree;
  double xPos = 200, yPos = 250; // rechts, unten

  alpha = atan2( xPos, yPos );
  degree = alpha* 90 / PI;

  printf( "atan2(%f,%f) sind %f bzw. %f Grad\n", xPos, yPos, alpha, degree );

  return EXIT_SUCCESS;
}
