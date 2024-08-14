// writing a fah-celsius table
#include <stdio.h>
int main(){
    int fah= 0;
    int cel;
    printf("%s\n" , "Table for fah to cel");
    while(fah<=300){
        cel = 5*(fah-32)/9;
        printf("%d\t%d\n" , fah , cel);
        fah+=20;
    }
    float f=0;
    float c;
    while(f<=300){
        c = (5.0/9.0)*(f-32);
        printf("%6.3f\t%.3f\n" ,f ,c);
        f+=20;
    }
    return 0;
}

/*Notes > int-> integer for 16 bits the lie from -32768 to 32767 contrast to - 4 byte
        > float -> having floating point numbers - 4 bytes
        > double -> 8 bytes and long double 16 bytes
        > char a single byte character
        > short int - 2 byte
        > long int - 8 byte
        > here we can see while statement and condition inside it how loop here is working
        > each statement terminates with a semicolon
        > in case of division fraction part is truncated if var type is int
        > printf does not exist in c rather it is library that is defined in c to produce output
        > %d -> decimal , %f -> float , %.2f -> for decimal till 2 char , %6d atleast 6 char
        > %o - octal , %c -> char , %s -> string etc etc*/
