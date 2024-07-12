//write a program to get the string in anew line when the space is there

#include <stdio.h>

void splitWords(char input[]) {
    int i, j;
    int length = 0;

    // Calculate the length of the input string
    while (input[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        // Skip leading spaces
        while (input[i] == ' ') {
            i++;
        }

        // Print the word
        for (j = i; input[j] != ' ' && input[j] != '\0'; j++) {
            printf("%c", input[j]);
        }
        printf("\n");

        // Move to the next word
        i = j;
    }
}

int main() {
    char input[] = "This is C";
    splitWords(input);
    return 0;
}


//output
// this
// is
// c