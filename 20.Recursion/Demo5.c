#include<stdio.h>
long long int  calcPower(int base,int power)
{
    if(power==0)
    {
        return 1;
    }
    if(power==1)
    {
        return base;
    }
    if(power %2==0)
    {
        return calcPower(base,power/2) *calcPower(base,power/2);
    }
    else{
        return calcPower(base,power/2) *calcPower(base,power/2) *base;
    }

}
int main(){
    int base=2,power=5;
    // long long int box=1;
    // while(power>0)
    // {
    //     box=base*box;
    //     power--;
    // }
    // printf("%lld ",box);

   long long int result= calcPower(base,power);
   printf("%lld",result);
return 0;
}