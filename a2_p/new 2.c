#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINES 3


void replaceCharacters(char** file_text, size_t size)
{
    for(int line = 0; line < size; line++)
    {
        for(size_t pos = 0; pos < strlen(file_text[line]); pos++)
        {
            if(file_text[line][pos] == '>')
            {
                file_text[line][pos] = '<';
            }
        }
    }
}


int saveNewFile(char** file_text, char* filename, size_t file_size)
{

    FILE* out_file = fopen(filename, "w+");
    if(out_file == NULL)
    {
        printf("could not open %s\n", filename);
        return -1;
    }

    for(int line = 0; line < file_size; line++)
    {
        fwrite(file_text[line], sizeof(char), strlen(file_text[line]), out_file);
    }

    fclose(out_file);

    return 0;

}

int main()
{
    FILE* in_file = fopen("Input.txt", "r");

    if(in_file == NULL) 
    {
        printf("error opening file\n");
        return -1;
    }

    size_t line_length[LINES] = {0};
    size_t line_start[LINES] = {0};

    char** file_text = malloc(sizeof(char*) * LINES);

    for(int i = 0; i < LINES; i++)
    {
        fread(&line_length[i], 1, 1, in_file);
        printf("line %d = %zu\n",i,  line_length[i]);
        file_text[i] = (char*) calloc( line_length[i] + 1, sizeof(char));
        if(file_text[i] == NULL) 
        {
            printf("out of mem\n");
        }//malloc(sizeof(char) * line_length[i] + 1);
    }

    for(int i = 0; i < LINES; i++)
    {
        fread(&line_start[i], sizeof(char), 1, in_file);
        printf("line %d starts at %zu\n", i, line_start[i]);
    }

    for(int i = 0; i < LINES; i++)
    {
        fseek(in_file, line_start[i], SEEK_SET);
        fread(file_text[i], sizeof(char), line_length[i], in_file);
        printf("%s\n", file_text[i]);
    }


    replaceCharacters(file_text, LINES);
    saveNewFile(file_text, "out.txt", LINES);

    for(int i = 0; i < LINES; i++)
    {
        if(file_text[i])
        {
            free(file_text[i]);
        }
    }
    free(file_text);

    if(in_file) // equivalent to in_file != NULL
    {
        fclose(in_file);
    }

    return 0;
}
