#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main (int argc, char *argv[]){
   int x, y, z;

   if (argc<3){
      printf("insufficient arguments");
   }
   else{
      x = atoi(argv[1]);
      y = atoi(argv[2]);
      z = x+y;
      printf("addition : %d", z);
   }
   return 0;
}