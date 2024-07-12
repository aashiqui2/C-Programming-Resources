#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}








//n=0
//n<=1
//0<=1//0

//n=1
//n<=1
//1<=1/01


//n=2
//2<=1
//return f(n-1)+f(n-2);
//f(1)+f(0)//011

//n=3
//3<=1
//return f(n-1)+f(n-2)
//f(2)+f(1)//0112

//n=4
//4<=1
//retur f(n-1)+f(n-2)
//f(3)+f(2)











