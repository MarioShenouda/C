#include <stdio.h>

int main(void)
{

  while(1)
  {
    char character = 0;
    printf("Insert character: ");

    // space is essential here - look at:
    // https://stackoverflow.com/questions/61014563/next-printf-comes-before-my-scanf-takes-input
    scanf(" %c", &character);
    if((character >= 'A' && character <= 'Z') ||
      (character >= 'a' && character <= 'z'))
    {
      printf("Number:           %d\n", character);
      printf("ASCII Character:  %c\n", character);
    }
    else
    {
      printf("[ERROR] not a valid Character [A-Z or a-z]\n");
    }

    if(character == 'Q' || character == 'q')
    {
      printf("GOODBYE\n");
      return 0;
    }
    printf("----------------------------------\n");

    int number = 0;
    printf("Insert number: ");
    scanf(" %d", &number);

    if((number >= 32 && number <= 126))
    {
      printf("Number:           %d\n", number);
      printf("ASCII Character:  %c\n", number);
    }
    else
    {
      printf("[ERROR] not a visible ASCII-Character\n");
    }
    printf("----------------------------------\n");
    printf("----------------------------------\n");
  }
  return 0;
}
