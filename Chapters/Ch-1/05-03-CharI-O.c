#include <stdio.h>
//couting number of line , tabs and backspaces
int main(){
    int c;
    int nl=0 , nt=0 , ns=0;
    while((c=getchar())!=EOF){
        if(c=='\n')nl++;
        else if(c=='\t')nt++;
        else if(c==' ')ns++;
    }
    printf("%d\t%d\t%d" , nl , nt , ns);
    return 0;
}
