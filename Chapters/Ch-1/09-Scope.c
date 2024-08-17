#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlin(void);
void copy(void);

int main(){
    int len;
    max=0;
    while((len = getlin())>0){
        if(len>max){
            max=len;
            copy();
        }
    }
    if(max>0){
        printf("Length - %d\n" , max);
        printf("%s" , longest);
    }
}

int getlin(){
    int c , i;
    for(i=0 ; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n' ; ++i){
        line[i]=c;
    }
    if(c=='\n')line[i++]=c;
    line[i] = '\0';
    return i;
}

void copy(){
    int i=0;
    while((longest[i]=line[i])!='\0')++i;
}


/*Notes > Private or local Scope - specified to a particular function and no other function could access them
        > Automatic Variables - appears in a function and then disappears when there work is completed
        > Global or External Variabes - defined only once they may be explicit extern
        > Extern imp points 1. They are needed to specify to the memory that certain variable is declared globally and memory is allocated elsewhere
         2. if in same source file then no need to redefine using extern but if multiple file need to access them then definition is necessay
         3. thats why a header file is used.
        > Difference between Definition - where var is decleared and storage allocated and decleartion - stated and is used or value is assignd  to it */
