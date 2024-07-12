#include<stdio.h>
int fun(){
    static int num=16;
    return num--;
}
int main(){
    for(fun();fun();fun()){
        printf("%d\n",fun());
    }
    for(int i=1;1;i++){
            printf("i=%d",i);
            break;
    }   
return 0;
}