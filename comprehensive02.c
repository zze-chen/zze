#include <stdio.h>

int main(){
    char word;
    while(scanf("%c",&word)!=EOF){
        if(word=='E'){
            printf("ByeBye\n");
        }else if(word=='M'){
            printf("Male\n");
        }else if(word=='F'){
            printf("Female\n");
        }
    }
    return 0;
}