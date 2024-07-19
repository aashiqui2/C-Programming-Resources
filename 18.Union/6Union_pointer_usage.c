// #include<stdio.h>
// struct store{
//     double price;
//     char *title;
//     char *author;
//     int num_pages;
//     int color;
//     int size;
//     char *design;
// };
// int main(){
//     struct store book;
//     printf("%d",sizeof(book));
// return 0;
// }

#include <stdio.h>
struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int num_pages;
        } book;
        struct
        {
            int color;
            int size;
            char *design;
        } shirt;
    }item;
};
int main()
{
    struct store s;
    s.item.book.title="The Alchemist";
    s.item.book.author="Paulo coelho";
    s.item.book.num_pages=197;
    printf("%s\n",s.item.book.author);

    printf("%d", sizeof(s));
    return 0;
}