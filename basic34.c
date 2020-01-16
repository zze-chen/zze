#include <stdio.h>

int main(){
    int weight,gender;
    float x;

    while(scanf("%d %d",&weight,&gender)!=EOF){
        if(gender==1){
            x = (weight-80)*0.7;
            printf("%.1f\n",x);
        }else if(gender==2){
            x = (weight-70)*0.6;
            printf("%.1f\n",x);
        }
    }
}