#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define THREE 3

void replace(char* text, size_t text_length, char letter_search, char letter_replace)
{
  for(size_t i = 0; i < text_length; i++)
  {
    if(text[i] == letter_search)
      text[i] = letter_replace;
  }
}

void jumpToPositionAndRead(FILE* fp, size_t pos, size_t length, char *text)
{
  fseek(fp, pos, SEEK_SET);
  fread(text, 1, length, fp);
}

char* mergeThreeString(char** strings, size_t length1, size_t length2, size_t length3)
{
  char *final_string = (char*)calloc(sizeof(char),length1+length2+length3+1);
  strncat(final_string, strings[0], length1);
  strncat(final_string, strings[1], length2);
  strncat(final_string, strings[2], length3);
  return final_string;
}

void freeEverything(char** text)
{
  for(int i = 0; i < THREE; i++)
    free(text[i]);
  free(text);
}

int main()
{
  FILE* fp = fopen("Input.txt","rb");

  if(fp == NULL)
    return 0;
  char **text = (char**)malloc(sizeof(char)*3);
  size_t length1 = 0;
  size_t length2 = 0;
  size_t length3 = 0;

  fread(&length1, 1, 1, fp);
  fread(&length2, 1, 1, fp);
  fread(&length3, 1, 1, fp);

  text[0] = (char*)malloc(sizeof(char)*length1);
  text[1] = (char*)malloc(sizeof(char)*length2);
  text[2] = (char*)malloc(sizeof(char)*length3);

  size_t pos1 = 0;
  size_t pos2 = 0;
  size_t pos3 = 0;

  fread(&pos1, 1, 1, fp);
  fread(&pos2, 1, 1, fp);
  fread(&pos3, 1, 1, fp);


  jumpToPositionAndRead(fp, pos1, length1, text[0]);
  jumpToPositionAndRead(fp, pos2, length2, text[1]);
  jumpToPositionAndRead(fp, pos3, length3, text[2]);


  replace(text[0], length1, '>', '<');
  replace(text[1], length2, '>', '<');
  replace(text[2], length3, '>', '<');

  fclose(fp);
  fp = fopen("Output.txt", "w");

  char *final_string = mergeThreeString(text, length1, length2, length3);

  printf("%s\n", final_string);
  fprintf(fp, "%s", final_string);

  fclose(fp);

  freeEverything(text);

  return 0;
}
