#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char c = '!';
    puts(str);//print all character with newline(\n)

 
    putc('H', stdout);//print character by character in a without adding a newline(\n)
    putc('i', stdout);
    putc(c, stdout);
    putc('\n', stdout);

    return 0;
}