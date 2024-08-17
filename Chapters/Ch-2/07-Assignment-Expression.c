#include <stdio.h>

int btc(unsigned x){
    int b;
    for(b=0 ; x!=0 ; x>>=1){
        if(x & 01)b++;
    }
    return b;
}//count no of bits

char * lower(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        arr[i] = (arr[i]>='A' && arr[i]<='Z') ? arr[i] + 32 : arr[i];
        i++;
    }
    return arr;
}


int main(){
    char arr[100] = "Alpha is BETA";
    printf("%s" , lower(arr));
}
/*Notes > x+=2 is same as x = x+2 ;
        > order precedence left to right , right to left
        > there is a proper list*/
