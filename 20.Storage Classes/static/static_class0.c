#include <stdio.h>
int func();
int main()
{
    printf("%d", func());
    printf("\n%d", func());
    printf("\n%d", func());

    //static variables only alive in block scope
    // printf("%d",count);
    return 0;
}
int func()
{
    static int count = 0; // variable initialization
    count++;       // incrementing counter variable
    return count;
}

// #include <stdio.h>  
// int main()  
// {  
//    printf("%d",func());  
//    printf("\n%d",func());  
  
//     return 0;  
// }  
// int func()  
// {  
//     static int count=0;  
//     count++;  
//     return count;  
// }  