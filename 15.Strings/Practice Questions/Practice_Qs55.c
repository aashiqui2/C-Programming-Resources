//!write a program to get the string in a new line when the space is there
#include <stdio.h>
void splitWords(char input[]) {
    int i, j;
    int length = 0;

    while (input[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        while (input[i] == ' ') {
            i++;
        }

        for (j = i; input[j] != ' ' && input[j] != '\0'; j++) {
            printf("%c", input[j]);
        }
        printf("\n");

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