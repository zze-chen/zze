#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
  
void main(){  
    int num1, num2, ans, i;  
    scanf("%d %d",&num1, &num2);  
    int d =(num2*num2)+(num1*num1);  
    for(i=1 ; i<d/2; i++) {  
        if(i*i > d){
            break;
        }  
    }    
    if(i < 100)  {  
        printf("inside\n");  
    }else{  
        printf("outside\n");  
    }
}  