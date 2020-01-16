#include <stdio.h>

int main(){
    int year;
    scanf("%d",&year);
    if(year%400==0){ 
        printf("Bissextile Year\n"); 
        return 0;
    }else if(year%100==0){ 
        printf("Common Year\n"); 
        return 0;
    }else if(year%4==0){ 
        printf("Bissextile Year\n"); 
        return 0; 
    }else{
        printf("Common Year\n"); 
        return 0;
    }
    return 0;
}