#include <stdio.h>
extern int count;
extern void printCount();  
int main() {
    printf("Initial count: %d\n", count);
    count = 10;
    printf("Modified count: %d\n", count);
    
    printCount();
    
    return 0;
}
// to compile -gcc main.c extern.c -o a
//to run ./a