#include <stdio.h>
#include <math.h>

int atoi(char s[]){
    int i ;
    int n = 0;
    for(i =0 ; s[i] >= '0' && s[i]<= '9' ; i++){
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
// the programs convert strings to integer.

int main(){
    int a = atoi("1234");
    printf("%d\n" , a);
    int a1 =2;
    float ans = sqrt((double)a1);
    printf("%f\n" , ans);
    return 0;
}

/*Notes > Integer -> Floats are allowed basically narrower converted to wider versions
        > Some of stuffs like float in power etc are just not allowed some like assigning
          long to short is allowed but bring on warnings with it.
        > ctype.h have functions like tolower toupper and also contains like isdigit()
        > signed - represent positive and negative both
        > unsigned - only Non-zero could be represented
        > -1L < 1U is good but -1L > 1UL which is not good because of type conversion
        > explicit value conversion te*/
