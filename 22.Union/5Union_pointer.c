#include<stdio.h>
union abc{
    int a;
    char b;
};
int main(){
    union abc var;
    var.a=90;
    union abc *ptr=&var;
    printf("%d %c",ptr->a,ptr->b);
    
return 0;
}