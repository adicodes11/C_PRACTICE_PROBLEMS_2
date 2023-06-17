// Program to read all the content of a file into a dynamically allocated array

#include <stdio.h>
#include <stdlib.h>

#define LOWER 1024
#define UPPER 65536

char *file_reader(char filename[], char **p)
{
    FILE *fptr = fopen(filename, "r");
    size_t allocated = LOWER;
    size_t total = 0;
    *p = malloc(allocated);

    if (fptr == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    while (!feof(fptr) && !ferror(fptr))
    {
        (*p)[total] = fgetc(fptr);
        total++;
        if (total >= allocated)
        {
            allocated += LOWER;
            if (allocated >= UPPER)
            {
                printf("File too long to read...\n");
                exit(4);
            }
            *p = realloc(*p, allocated);
        }
    }

    if (ferror(fptr))
    {
        printf("Error reading file...\n");
        exit(0);
    }
    *p = realloc(*p, total); // jitni space chahiye utni pr lastly set krdiya
    (*p)[total - 1] = '\0';
    fclose(fptr);
}

int main(int argc, char *argv[])
{
    char *filename = argv[1], *p;

    if (argc != 2)
    {
        printf("Arguments missing...\n");
        return 1;
    }

    file_reader(filename, &p);
    puts(p);
    free(p);

    return 0;
}