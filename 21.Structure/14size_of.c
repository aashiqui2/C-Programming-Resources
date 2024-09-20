// #include<stdio.h>
// struct abc
// {
//    char a;
//    char b;
//    int c;
// }var;

// int main(){
    // printf("%d",sizeof(struct abc));
//     printf("%d",sizeof(var));
    
// return 0;
// }

//! rearanging the member will affect the size
// #include<stdio.h>
// struct abc
// {
//    char a;
//    int c;
//    char b;
// }var;
// int main(){
//     printf("%d",sizeof(var));
// return 0;
// }


//! using the #pragma pack(1)
// #pragma pack(1)
// #include<stdio.h>
// struct abc
// {
//    char a;
//    int c;
//    char b;
// }var;
// int main(){
//     printf("%d",sizeof(var));
// return 0;
// }