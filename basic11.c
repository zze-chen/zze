#include <stdio.h>  
#include <stdlib.h>  
  
int main(){  
    int matrix[10][10];  
    int row, column;  
    int i, j;  
    while(scanf("%d %d", &row, &column)!= EOF){  
        for (i = 0; i < row; i++){  
            for (j = 0; j < column; j++){  
                    scanf("%d", &matrix[i][j]);  
            }  
        }  
        for (i = 0; i < column; i++){  
            for (j = 0; j < row; j++){  
                printf("%d", matrix[j][i]);  
                if(j != row-1){
                    printf(" ");
                }  
            }  
            printf("\n");  
        }  
    }  
}  