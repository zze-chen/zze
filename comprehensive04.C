#include <stdio.h>

int main(){
    int score=0;
    while(scanf("%d", &score)!=EOF){
        if(score<0 || score>100){
            printf("error\n");
        }else if(score >=90 && score<=100){
            printf("A\n");
        }else if(score >=80 && score<=89){
            printf("B\n");
        }else if(score >=70 && score<=79){
            printf("C\n");
        }else if(score >=60 && score<=69){
            printf("D\n");
        }else{
            printf("E\n");
        }
    }
}