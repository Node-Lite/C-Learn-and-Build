#include <stdio.h>

int main(){
    int a ,c ;
    c = getchar();
    while(c != (EOF)){
        putchar(c);
        c = getchar();
    }
    printf("%d\n", EOF);
}

/*Notes > getchar takes input from text stream(in buffer) and assign to var
        > putchar puts character on screen till we press enter it puts in buffer
        > EOF end of file whose value is integer thats why int is used here and also 4 byte advantage  */
