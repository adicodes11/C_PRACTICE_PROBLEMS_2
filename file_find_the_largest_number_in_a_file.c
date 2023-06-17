// Program to find the largest number in a file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = fopen("numbers.50", "r");
    double count = 0, max, current;
    char buffer[100];

    //Error handling
    if(fptr == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }

    while (fgets(buffer, 100, fptr) != NULL)
    {
        current = atof(buffer);

        if(count == 0)  max = current;
        else
        {
            if(current > max)
                max = current;
        }
        count++;
    }

    printf("The largest number is %lf\n",max);

    return 0;
}