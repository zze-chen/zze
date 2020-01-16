#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int num;  
    int ans = 0;  
    scanf("%d",&num);  
    for(int i=1; i<=num; i++){  
        if(i%3 == 0){  
            ans += i;  
        }  
    }  
    printf("%d\n",ans);  
}  