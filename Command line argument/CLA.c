#include <stdio.h>

int main(int argc, char *argv[]) {
    // Print the number of arguments
    printf("Number of arguments: %d\n", argc);

    // Print each argument
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
