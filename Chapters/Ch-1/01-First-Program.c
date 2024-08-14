#include <stdio.h> //standard input output library look for it main receiving no args and is starting point of program
int main(){
    printf("Hello, World\n");
    return 0;
}

/*Notes > cc or gcc helps in compilation , eg. "gcc first-program.c" it gives a default .out file name "a.out" which can be executed using  "./a.out".
        > There are other ways as well do the same a example where you can give specific name to exec file "gcc first.c -o myprogram".
        > One more way which gives more command over compilation is first making object files and then linking them together
          "gcc -c first.c
           gcc -c second.c
           gcc first.o second.o -o myprogram"
        > printf is the library function that prints output and it never suplies new line char
        > \n - new line char
        > \t - tab
        > \b - backspace
*/
