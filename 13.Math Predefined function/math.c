#include <stdio.h>
#include <math.h>

int main() {
    double base = 5.0, exponent = 3.0;
    

    double powerResult = pow(base, exponent);
    printf("%.2f raised to the power %.2f is %.2f\n", base, exponent, powerResult);
    
    double num1 = 25.0, num2 = 8.0;
    
  
    double sqrtResult = sqrt(num1);
    printf("Square root of %.2f is %.2f\n", num1, sqrtResult);
    

    double cbrtResult = cbrt(num2);
    printf("Cube root of %.2f is %.2f\n", num2, cbrtResult);
    
    return 0;
}
