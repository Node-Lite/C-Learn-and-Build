#include <stdio.h>

int main(){
    int arr[10];
    int c;
    int tmp=0;
    int i=0;
    while((c=getchar())!=EOF){
        if(c==' ' || c=='\t' || c=='\n'){
            arr[i++]=tmp;
            tmp=0;
        }
        else tmp++;
    }
    for(int a=0 ; a<i ; a++){
        for(int b=0 ; b<arr[a] ; b++)printf(">");
        printf("\n");
    }
    return 0;
}

/*Notes > In arrays the subscript start at 0 and then it follow as on
        > Decleration is done as per type name[size]
        */
