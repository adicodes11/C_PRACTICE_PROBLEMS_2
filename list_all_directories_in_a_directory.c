// Program to list all files and directories in a directory (posix library)

#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *directory;
    struct dirent *entry = NULL;

    // Opening directory
    directory = opendir(".");   // . is for the current working directory  || for local disk use C:\\ 

    // Error Handling
    if (directory == NULL)
    {
        printf("Error opening directory...\n");
        return 1;
    }

    while ((entry = readdir(directory)) != NULL)
    {
        if (entry->d_type == DT_REG)
        {
            printf("File: %s\n", entry->d_name);
        }
        else if (entry->d_type == DT_DIR)
        {
            printf("DIR: %s\n", entry->d_name);
        }
    }

    // close the directory... if closedir() fails it will return -1
    if (closedir(directory) == -1)
    {
        printf("Error closing directory...\n");
        return 1;
    }

    return 0;
}