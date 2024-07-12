#include <stdio.h>
#include <ctype.h>

void convertToLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original String: %s\n", myString);

    convertToLowerCase(myString);

    printf("Converted to Lowercase: %s\n", myString);

    return 0;
}
