#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c , nl, nw , nc , state;
    char arr[100];
    state = OUT;
    nl = nw = nc = 0;
    while((c=getchar())!=EOF){
        arr[nc++] = c;
        if(c=='\n')++nl;
        if(c==' ' || c=='\n' || c=='\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d\t%d\t%d\n" , nl , nw , nc);

    for(int i=0 ; i<nc ; i++){
        if(arr[i]==' ' || arr[i]=='\n' || arr[i]=='\t')putchar('\n');
        else putchar(arr[i]);
    }

    return 0;
}
