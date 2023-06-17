// Program to how to safely handle realloc() failure

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(4 * sizeof(int));
    int *temp = NULL;
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[4] = 4;

    // However if we request for a extra large memory space then the used function realloc will return NULL

    ptr = realloc(ptr, 99999999);
    if(temp!=NULL)  
    {
        temp = ptr; // so that atleast base address secure rhe humare sath
    }
    if (ptr == NULL)
    {
        printf("Cannot allocate memory further\n");
    }

    free(ptr);

    return 0;
}