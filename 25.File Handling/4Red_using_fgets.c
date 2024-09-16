#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    // char c[100];
    // if (fgets(c, sizeof(c), fptr) != NULL)//!read only the single line nad return an pointer
    // {
    //     printf("%s\n", c);
    // }
    // else
    // {
    //     printf("Error reading from file or file is empty.\n");
    // }

    // char line[100];
    // while(fgets(line,sizeof(line),fptr)!=NULL)//!read the entire content in a file
    // {
    //      printf("%s\n", line);
    // }
    fclose(fptr);
    return 0;
}