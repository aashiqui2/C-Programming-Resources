#include <stdio.h>
void filecopy(FILE *fpIn, FILE *fpOut)
{
    int c;
    while ((c = fgetc(fpIn)) != EOF)
    {
        fputc(c, fpOut);
    }
}

int main()
{
    // FILE *fptr;
    // fptr = fopen("Test.txt", "w"); //! overrite the previous content
    // fputc('M',fptr);
    // fputc('A',fptr);
    // fputc('N',fptr);
    // fputc('G',fptr);
    // fputc('O',fptr);
    // fclose(fptr);

    FILE *fptrIn, *fptrOut;
    fptrIn = fopen("Test.txt", "r");
    if (fptrIn == NULL)
    {
        printf("Error opening input file!\n");
        return 1;
    }
    fptrOut = fopen("Output.txt", "w");
    if (fptrOut == NULL)
    {
        printf("Error opening output file!\n");
        fclose(fptrIn);
        return 1;
    }
    filecopy(fptrIn, fptrOut);
    fclose(fptrIn);
    fclose(fptrOut);

    return 0;
}
