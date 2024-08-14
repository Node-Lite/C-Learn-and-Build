#include <stdio.h>
//counting number of characters
int main(){
    long nc = 0;
    while(getchar()!=EOF){
        nc++;
    }
    printf("%ld\n" , nc);
    return 0;
}
/*Notes > ++ and -- operator which acts as a increment and decrement simultaneously
        > ++n prefix and n++ postfix
*/
