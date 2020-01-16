#include <stdio.h>

int main(){
    int cnt=0;
    float ave,sum=0;
    float num[100];
    while(scanf("%f",&num[cnt])!=EOF){
        cnt++;
    }
    printf("Size: %d\n",cnt);
    for(int i=0;i<cnt;i++){ 
        sum+=num[i]; 
    }
    if(sum==0){ 
        printf("Average: 0.000\n"); 
        return 0;  
    }
    ave = sum/cnt;
    ave += 0.0004;
    printf("Average: %.3f\n",ave);
    return 0;
}