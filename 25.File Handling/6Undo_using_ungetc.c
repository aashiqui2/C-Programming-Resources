#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;

    // Read the first character
    ch = fgetc(fptr);
    printf("First character read: %c\n", ch);

    // Push the character back onto the stream
    ungetc(ch, fptr);

    // Read the character again (it should be the same as the first one)
    ch = fgetc(fptr);
    printf("Character read after ungetc: %c\n", ch);

    fclose(fptr);
    return 0;
}
