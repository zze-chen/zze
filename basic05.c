#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
  
int main(){  
    int output[8] = {0};  
    int input, sign;  
          
    scanf("%d",&input);  
    if(input>127 || input<-128) {
        return 0;
    }  
    sign = input;
    //先當正數處理  
    if(input<0){ 
        input=input*-1;
    }  
    for(int i=7; i>=0; i--){  
        if(input == 0) {
            break;
        }  
        output[i] = input%2;  
        input = input/2;  
    }  
    //若為負數 即相反
    if(sign<0){  
        for(int i=0; i<8; i++){  
            if(output[i] != 0){  
                for(int j=0; j<i; j++){  
                    if(output[j] == 0) {
                        output[j] = 1;
                    }else if(output[j] == 1){
                        output[j] = 0;
                    }  
                }  
                break;  
            }  
        }  
    }  
    for(int i=0; i<8; i++){  
        printf("%d",output[i]);  
    }  
    printf("\n");  
}  