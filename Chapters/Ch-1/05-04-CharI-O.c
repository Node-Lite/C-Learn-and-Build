#include <stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF){
        putchar(c);
        int tmp=1;
        while(c==' '){
            c = getchar();
            tmp=0;
        };
        if(tmp==0)putchar(c);
    }
    return 0;
}
