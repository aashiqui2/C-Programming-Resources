#include <stdio.h>
#include <string.h>



int main() {
    // char str[10]="Hello";
    // char reversed[10];

    // int length = strlen(str);
    // printf("%d\n",length);

    // for (int i = 0; i < length; i++) {
    //     reversed[length - 1 - i] = str[i];
    // }
    // reversed[length] = '\0'; // Null-terminate the reversed string

    // printf("Original string: %s\n", str);
    // printf("Reversed string: %s\n", reversed);

    char str[10]="world";
    strrev(str);
    printf("%s",str);

    return 0;
}
