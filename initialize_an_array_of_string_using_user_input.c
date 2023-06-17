// Program to initialize an array of strings using with user input

#include<stdio.h>
#include<string.h>

int array_of_strings(char strings[10][1024])
{
    int string_count = 0;
    int cont = 1;

    do
    {
        printf("Enter string %d: ",string_count+1);
        fgets(strings[string_count],1024,stdin);
        int slen = strlen(strings[string_count]);
        strings[string_count][slen-1]='\0';
        string_count++;
        printf("Press 1 to add another string and 0 to stop: ");
        scanf("%d",&cont);
        fflush(stdin);
        
    } while (cont!=0);

    return string_count+1;
    
}

int main()
{
    char strings[10][1024];
    
    int string_count = array_of_strings(strings);

    printf("Displaying the array of strings\n");
    for (int i = 0; i < string_count; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}