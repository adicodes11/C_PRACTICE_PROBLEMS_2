// Program to write an array of structs to a csv file

// File name: write_csv.txt

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

void write_csv(char filename[])
{
    FILE *file = fopen(filename, "w");
    int n;

    printf("Enter the number of records to be created: ");
    scanf("%d", &n);
    Data data[n];
    for (int i = 0; i < n; i++)
    {
        printf("Male Female (M/F): ");
        scanf(" %c", &data[i].type);
        fflush(stdin);
        printf("Enter name: ");
        fgets(data[i].name, 20, stdin);
        data[i].name[strlen(data[i].name) - 1] = '\0';
        printf("Enter age: ");
        scanf("%d", &data[i].age);
        printf("Enter the average: ");
        scanf("%f", &data[i].average);
    }

    // Error Handling
    if (file == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%c,%s,%d,%g\n", data[i].type,
                data[i].name,
                data[i].age,
                data[i].average);
    }

    fclose(file);
}

int main()
{
    char filename[20];
    printf("Enter the file name: ");
    fgets(filename, 20, stdin);
    filename[strlen(filename) - 1] = '\0';

    write_csv(filename);

    return 0;
}