#include <stdio.h>

int plus(int n){
    int sum;
    if(n==0){
        return 1; 
    }else if(n==1){
        return 2;
    }else {
        return (plus(n-1) + plus(n/2));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",plus(n));
}