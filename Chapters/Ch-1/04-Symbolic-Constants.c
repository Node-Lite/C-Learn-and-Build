#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(){
    float f=LOWER;
    for(; f<=UPPER ; f+=STEP){
        float c = 5.0/9.0 * (f-32);
        printf("%3f\t%.2f\n" , f , c);
    }
    return 0;
}

//Notes > define is used for a symbolic name of line of constants
//      > #define  name  replacementlist
