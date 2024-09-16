/**
 * C program to find length of a string using pointer
 */

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    char * str = text; 
    int count = 0;

    
    printf("Enter any string: ");
    fgets(text,MAX_SIZE,stdin);

   
    while(*(str++) != '\0') 
    {
        count++;
    }
    

    printf("Length of '%s' = %d", text, count);

    return 0;
}