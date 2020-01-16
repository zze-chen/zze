#include <stdio.h>

int main(){
    int num;
    int input[num];
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        scanf("%d", &input[i]);
    }
    int c;  
    for(int i=0;i<num;i++){  
        c=0;  
        for(int j=0;j<num;j++){  
            if(input[i]==input[j]){  
                c++;  
            }
            if(c>1){  
                break;
            }  
        }  
        if(c>1){  
            break;
        }  
    }  
    if(c>1){
        printf("0\n");
    }else{
        printf("1\n");
    }
}