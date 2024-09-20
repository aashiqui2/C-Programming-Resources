//? anonymous struct
#include <stdio.h>
struct
{
    char *engine;

} car1, car2;
int main()
{
    // car1.engine="DDIS 190 Engine";
    // car2.engine="1.2L Kappa Dual VTVT";
    // printf("%s\n",car1.engine);
    // printf("%s\n",car2.engine); 


    // Trying to declare another variable of the same struct type
    // This will cause an error because the struct is anonymous and has no name
    // struct Car car3; // Error: 'Car' has no type or name

    return 0;
}


