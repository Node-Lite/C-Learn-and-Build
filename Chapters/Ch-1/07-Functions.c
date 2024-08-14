#include <stdio.h>

int power(int m  , int n){
    int ans=1;
    for(int i=1 ; i<=n ; i++){
        ans*=m;
    }
    return ans;
}
int main(){
    printf("%d\n" , power(2,3));
    return 0;
}

/*Notes > A function is like a subroutine which can be called in to perform certain task while execution.
        > There is certain way a function is written keeping is arguments and return type in mind and then
          executing them.*/
