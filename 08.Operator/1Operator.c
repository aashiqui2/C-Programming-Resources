#include <stdio.h>
int main()
{
    int a = 10, b = 4;
    int result;

    // Addition
    result = a + b;
    printf("Addition: %d\n", result);

    // Subtraction
    result = a - b;
    printf("Subtraction: %d\n", result);

    // Multiplication
    result = a * b;
    printf("Multiplication: %d\n", result);

    // Division
    result = a / b;
    printf("Division: %d\n", result);

    // Modulus
    result = a % b;
    printf("Modulus: %d\n", result);

    int a = 10, b = 4;
    int result;

    // Greater than
    result = (a > b);
    printf("Greater than: %d\n", result);

    // Less than
    result = (a < b);
    printf("Less than: %d\n", result);

    // Greater than or equal to
    result = (a >= b);
    printf("Greater than or equal to: %d\n", result);

    // Less than or equal to
    result = (a <= b);
    printf("Less than or equal to: %d\n", result);

    // Equal to
    result = (a == b);
    printf("Equal to: %d\n", result);

    // Not equal to
    result = (a != b);
    printf("Not equal to: %d\n", result);

    int a = 1, b = 0;
    int result;

    // Logical AND
    result = (a && b);
    printf("Logical AND: %d\n", result);

    // Logical OR
    result = (a || b);
    printf("Logical OR: %d\n", result);

    // Logical NOT
    result = !a;
    printf("Logical NOT (a): %d\n", result);

    result = !b;
    printf("Logical NOT (b): %d\n", result);

    int a = 5, b = 3;
    int result;

    // Bitwise AND
    result = a & b;
    printf("Bitwise AND: %d\n", result);

    // Bitwise OR
    result = a | b;
    printf("Bitwise OR: %d\n", result);

    // Bitwise XOR
    result = a ^ b;
    printf("Bitwise XOR: %d\n", result);

    // Bitwise NOT
    result = ~a;
    printf("Bitwise NOT (a): %d\n", result);

    int a = 10, b = 5;
    int result;

    // Simple assignment
    result = a;
    printf("Simple assignment: %d\n", result);

    // Addition assignment
    result += b;
    printf("Addition assignment: %d\n", result);

    // Subtraction assignment
    result -= b;
    printf("Subtraction assignment: %d\n", result);

    // Multiplication assignment
    result *= b;
    printf("Multiplication assignment: %d\n", result);

    // Division assignment
    result /= b;
    printf("Division assignment: %d\n", result);

    // Modulus assignment
    result %= b;
    printf("Modulus assignment: %d\n", result);

    // Increment operator
    printf("Original value of a: %d\n", a);
    printf("After incrementing: %d\n", ++a);

    // Decrement operator
    printf("After decrementing: %d\n", --a);

    return 0;
}