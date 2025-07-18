#include <stdio.h>

int main()
{
  unsigned int length = 0;
  unsigned int width = 0;

  printf("Insert length: ");
  scanf("%d", &length);

  printf("Insert width: ");
  scanf("%d", &width);

  unsigned int area = length * width;
  unsigned int perimeter = (length + width) * 2;
  float aspect_ratio = length / (float) width;

  printf("Area: %d\n", area);
  printf("Perimeter: %d\n", perimeter);
  printf("Aspect ratio: %f\n", aspect_ratio);

  return 0;
}
