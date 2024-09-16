#include <stdio.h>
#include <math.h>

int main() {
    double negativeValue = -12.34;
    double positiveValue = 12.4;

   
    double absResult = fabs(negativeValue);
    printf("Absolute value of %.2f is %.2f\n", negativeValue, absResult);

    double floorResult = floor(positiveValue);
    double ceilResult = ceil(positiveValue);
    double roundResult = round(positiveValue);
    
    printf("Floor of %.2f is %.2f\n", positiveValue, floorResult);
    printf("Ceil of %.2f is %.2f\n", positiveValue, ceilResult);
    printf("Round of %.2f is %.2f\n", positiveValue, roundResult);
    
    return 0;
}
