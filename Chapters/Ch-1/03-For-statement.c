#include <stdio.h>
int main(){
    float cel=300;
    for(; cel>=0 ; cel-=20){
        float f = ((9.0*cel)+160)/5.0;
        printf("%.2f\t%.2f\n" , f , cel);
    }
    return 0;
}
