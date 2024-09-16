#include <stdio.h>
int main() {
    FILE *f1;
    char c;
    f1 = fopen("Write.txt", "w");
    if (f1 == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    while ((c = getchar()) != EOF) {
        putc(c, f1);
    }
    fclose(f1);
    printf("\nData Output\n\n");
    f1 = fopen("Write.txt", "r");
    if (f1 == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while ((c = getc(f1)) != EOF) {
        printf("%c", c);
    }

    fclose(f1);
    return 0;
}
