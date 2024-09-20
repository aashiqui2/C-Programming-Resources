#include <stdio.h>

int main()
{
    char str[20];

    // To get multiple words with whitespaces (skips only newline character '\n')
    // The %[^\n] format specifier reads input until a newline character is encountered.
    // scanf("%[^\n]s", str);

    // To take only uppercase letters (A-Z) as input.
    // If the first character is lowercase, it will not accept any input.
    // The %[A-Z] format specifier reads input consisting only of uppercase letters.
    // scanf("%[A-Z]s", str);

    // To take only lowercase letters (a-z) as input.
    // If the first character is uppercase, it will not accept any input.
    // The %[a-z] format specifier reads input consisting only of lowercase letters.
    // scanf("%[a-z]s", str);

    // To take only digits (0-9) as input.
    // If the first character is not a number, it will not accept any input.
    // The %[0-9] format specifier reads input consisting only of digits.
    // scanf("%[0-9]s", str);

    // To take input that starts with a non-alphanumeric character.
    // If the first character is a letter or number, it will not accept any input.
    // The %[^\n] format specifier reads input consisting of characters other than letters and digits.
    scanf("%[^A-Za-z0-9\n]s", str);

    printf("%s", str);

    return 0;
}
