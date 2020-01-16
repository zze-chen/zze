#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=b;i>0;i--){
        for(int i=a;i>0;i--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}