// Program to read a csv file into an array of structs

// File name: read_csv.txt

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char type;
    char name[20];
    int age;
    float average;
} Data;

void csv_reader(char filename[])
{
    FILE *file = fopen(filename, "r");

    Data data[100];

    // Error Handling
    if (file == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    int read = 0;
    int records = 0;
    while (!feof(file))
    {
        if (ferror(file))
        {
            printf("Error reading file...\n");
            exit(0);
        }

        read = fscanf(file, "%c,%19[^,],%d,%f\n", &data[records].type,
                      data[records].name,
                      &data[records].age,
                      &data[records].average);

        if (read == 4)
        {
            records++;
        }

        if (read != 4 && !feof(file))
        {
            printf("Invalid file format...\n");
            exit(0);
        }
    }
    fclose(file);

    printf("Number of records read: %d\n", records);
    for (int i = 0; i < records; i++)
    {
        printf("%c   ",data[i].type);
        printf("%-20s   ",data[i].name);
        printf("%6d   ",data[i].age);
        printf("%-8.2f\n",data[i].average);
    }
}

int main()
{
    char filename[20];
    printf("Enter the file name: ");
    fgets(filename, 20, stdin);
    filename[strlen(filename) - 1] = '\0';

    csv_reader(filename);

    return 0;
}

// File Content:
// M,Virat Kohli,30,59.60
// F,Sasha Grey,23,60.68
// M,Rohit Sharma,31,78.90
// M,Cheteshwar Pujara,40,99.99
// F,Sir Dinda,66,200.200