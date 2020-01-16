#include <stdio.h>  
  
int main(){  
    int a, b, i;  
    scanf("%d %d",&a, &b);  
    if(a<=0 || b<=0){
        return 0;
    }else{  
        while(a>0 && b>0){  
            if(a>b){  
                a = a%b;  
            }else{  
                b = b%a;  
            }  
        }  
        if(a==0){  
            printf("%d\n",b);
        }else{  
            printf("%d\n",a);
        }  
    }  
}  