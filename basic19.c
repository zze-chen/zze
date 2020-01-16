#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    int num;  
    scanf("%d", &num);  
  
    int went[num], back[num];  
    int cnt;  
    int a = 0;  
    for(int i=0; i<num; i++){  
        scanf("%d %d",&went[i], &back[i]);  
    }  
    cnt = num;  
    for(int i=0; i<num-1; i++) {  
        for(int j=a+1; j<num; j++) {  
            //比較完第一個後再繼續將第一個跟第二個比較
            if(back[i] <= went[j]){
            //若找到有重疊的即--  s
                cnt--; a++;  
                break;  
            }  
        }  
    }  
    printf("%d\n", cnt);  
}  