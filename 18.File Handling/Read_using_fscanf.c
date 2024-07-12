#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("The character %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character %c\n", ch);
    // fclose(fptr);
    // check for integer reading
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("The character %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("The character %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("The character %d\n", ch);
    fclose(fptr);
    return 0;
}