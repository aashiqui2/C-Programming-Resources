#include <stdio.h>
int main()
{
    FILE *fptr;
    // fptr = fopen("Test.txt", "r");

    fptr = fopen("Test.txt", "w");
    //!if the file does not exist it will create a file.
    //! if it is alread exist it will overwrite a file.

    // fptr = fopen("Test.txt", "a");
    //! appending mode add the content at the end of the previous on and does not overwrite the content
    //!if the file does not exist it will create a file.
    if (fptr == NULL)
    {
        printf("The File is Not exist\n");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}