#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[] , int maxL);
void copy(char des[] , char sour[]);

int main(){
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while((len = getlin(line ,MAXLINE))>0){
        if(len>max){
            max=len;
            copy(longest , line);
        }
    }
    if(max>0){
        printf("Length - %d\n" , max);
        printf("%s" , longest);
    }
}

int getlin(char s[] , int lim){
    int c , i;
    for(i=0 ; i<lim-1 && (c=getchar())!=EOF && c!='\n' ; ++i){
        s[i]=c;
    }
    if(c=='\n')s[i++]=c;
    s[i] = '\0';
    return i;
}

void copy(char des[] , char sour[]){
    int i=0;
    while((des[i]=sour[i])!='\0')++i;
}


/*Notes > Arrays are passed as refernce type more accurately pointer type
        > A well written string is nothing but char array with proper null char terminator*/
