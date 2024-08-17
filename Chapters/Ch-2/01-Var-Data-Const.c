#include <stdio.h>

enum MONTHS {JAN = 1 , FEB , MAR , APR};

int main(){
    printf("%d\t%d" , FEB , MAR);
    return 0;
}

/*Notes > Variables rules - First char must be a letter '_' is letter, but dont begin with them
          Keywords like if else etc are reserved you cant be using them
        > Types of data already discussed in chapter 1
        > Constants like 1234 and Long like 1234L
        > Char constants whose value is decided by ascii
        > \a - bell, \b - backspace, \' singlequotw
          \v - vertical tab and \ooo for octal and \xhh for hexadecimal
        > string functions found under string.h and "string literal written in between them having a \0 at end
        > enum boolean {NO , YES} enum months {JAN = 2 ,FEB , ..} it is basically aternative to define with
          the advantage values can be generated for us.*/
