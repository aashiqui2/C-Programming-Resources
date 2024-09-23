#include <stdio.h>
void filecopy(FILE *fpIn, FILE *fpOut) {
    int c;
    while ((c = getc(fpIn)) != EOF) {
        putc(c, fpOut);
    }
}

int main() {
    FILE *fptrIn, *fptrout;
    fptrIn = fopen("Test.txt", "r");
    if (fptrIn == NULL) {
        printf("Error: Input file does not exist or cannot be opened.\n");
        return 1; 
    }
    fptrout = fopen("Output.txt", "w");
    if (fptrout == NULL) {
        printf("Error: Output file cannot be created or opened.\n");
        fclose(fptrIn);  
        return 1;
    }

    filecopy(fptrIn, fptrout);
    fclose(fptrIn);
    fclose(fptrout);

    return 0;
}
