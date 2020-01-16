#include <stdio.h>

int main(){
    float num[10]={0.0};
    int i=0;
    float sum=0;
    while(scanf("%f",&num[i])!=EOF){
        num[i]=num[i]*num[i];
        i++;
    }
    if(i<5){
        return 0;
    }
    for(int j=0;j<i;j++){
        sum += num[j];
    }
    sum=(int)(sum*1000000+0.5);
    sum=sum/1000000;
    printf("%0.6f\n",sum);
    return 0;
}