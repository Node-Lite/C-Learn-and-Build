#include <stdio.h>

unsigned getbits(unsigned x, int p, int n){
    return (x >> (p-n+1) & ~(~0<<n));
}
int main(){
    printf("%d" , getbits(1111 , 2 ,3));
    return 0;
}

/* Notes > Unary Operator -> ~
         > & bitwise and  , ^ XOR , | OR , << shift a bit left , >> shift a bit right
         > LSB is 0th position
         > x>>3 shift 3 bits right
         > ~0 and 1 are not same*/
