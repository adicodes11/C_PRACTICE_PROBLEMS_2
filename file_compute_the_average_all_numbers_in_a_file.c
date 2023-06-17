// Program to computer the average of all the numbers in a file

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("numbers.50","r");
    double current_number , sum = 0, number_count = 0;
    char buffer[100];

    //Error handling
    if(fptr == NULL)
    {
        printf("Error opening file...\n");
        return 1;
    }

    while(fgets(buffer,100,fptr)!=NULL)
    {
        current_number = atof(buffer);
        sum += current_number;
        number_count++;
    }

    printf("The average of all the numbers in the file is %g\n",(double)sum/number_count);


    return 0;
}