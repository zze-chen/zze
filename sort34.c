#include <stdio.h>

int main(){
    int cnt;
    float num[20];
    float max,min;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++){
        scanf("%f",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(int i=1;i<cnt;i++){
        if(max<num[i]){
            max=num[i];
        }
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("%.2f\n%.2f\n", max,min);
}