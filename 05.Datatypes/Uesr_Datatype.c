#include <stdio.h>
int main()
{
    // Derived data types
    typedef unsigned int uint;
    uint x = 20;

    enum Color
    {
        Red,
        Green,
        Blue
    };
    enum Color selected_color = Blue;

    struct Person
    {
        char name[20];
        int age;
    };
    struct Person p1 = {"John", 30};

    printf("x: %u\n", x);
    printf("Selected color: %d\n", selected_color);
    printf("Person: %s, %d years old\n", p1.name, p1.age);
    return 0;
}