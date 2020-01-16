#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    float num[10];  
    float min, max;  
    for(int i=0; i<10; i++){  
        scanf("%f", &num[i]);  
    }  
    min = num[0];  
    max = num[0];  
    for(int i=1; i<10; i++){  
        if(num[i] > max){
            max = num[i];
        }else if(num[i] < min){
            min = num[i];
        }  
    }  
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}  