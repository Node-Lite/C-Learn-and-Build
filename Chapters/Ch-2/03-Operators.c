#include <stdio.h>

int main(){
    int year = 2024;
    if((year%4==0 && year%100 !=0) || (year%400==0))printf("Yes");
    else printf("No");
    return 0;
}

/*Notes > Arithematic Operators -> + - * / and modulo
          + - <<< * / % Modulo cannot be applied to floats
        > Relational Operator > >= < <=  >> != ==
        > Relational have lower precedence than arithematic
        > Logical operator && and || they stop as soon as true in case of 'or' and false in case of 'and' is
         known and preceds or*/
