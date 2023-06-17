// Program to find the average of groups of numbers in a file

#include <stdio.h>

int main()
{
    FILE *fptr = fopen("number.dat", "r");
    int group_length , remaining_group_members = 0, next_number = 0;
    float sum = 0;

    while (!feof(fptr))
    {
        if (remaining_group_members == 0)
        {
            fscanf(fptr, "%d", &group_length);
            remaining_group_members = group_length;
            printf("The number of elements in this group is %d\n", group_length);
            printf("The data in this group is: ");
        }
        else
        {
            fscanf(fptr, "%d", &next_number);
            printf("%d ", next_number);
            sum += next_number;
            remaining_group_members--;

            if (remaining_group_members == 0)
            {
                printf("\nAverage: %g\n", sum / group_length);
                sum = 0;
            }
        }
    }
    fclose(fptr);

    return 0;
}