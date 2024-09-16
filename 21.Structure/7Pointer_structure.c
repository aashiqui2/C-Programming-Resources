#include <stdio.h>
void printstruct(char name[], int rollno, int mark);

int main() {
    struct student {
        char name[25];
        int rollno;
        int mark;
    };

    struct student s1 = {"Ashok", 21, 97}; 

    printstruct(s1.name, s1.rollno, s1.mark);
    
    return 0;
}


void printstruct(char name[], int rollno, int mark) {
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollno);
    printf("Mark: %d\n", mark);
}
