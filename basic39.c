#include <stdio.h>

int main(){
    int num;
    int grade[10][3];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&grade[i][j]);
        }
    }
    for(int i=0;i<num;i++){
        //三科大於60
        if(grade[i][0]>=60 && grade[i][1]>=60 && grade[i][2]>=60){
            printf("P\n");
        }else if(grade[i][0]>=60 && grade[i][1]>=60 && grade[i][2]<=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                printf("P\n"); 
            }else{ 
                printf("M\n"); 
            }
        }else if(grade[i][0]>=60 && grade[i][1]<=60 && grade[i][2]>=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                printf("P\n"); 
            }else{ 
                printf("M\n"); 
            }
        }else if(grade[i][0]<=60 && grade[i][1]>=60 && grade[i][2]>=60){
            //總和超過220
            if((grade[i][0]+grade[i][1]+grade[i][2])>=220){ 
                printf("P\n"); 
            }else{ 
                printf("M\n"); 
            }
        }else if(grade[i][0]<=60 && grade[i][1]<=60 && grade[i][2]>=80){
            printf("M\n");
        }else if(grade[i][0]<=60 && grade[i][1]>=80 && grade[i][2]<=60){
            printf("M\n");
        }else if(grade[i][0]>=80 && grade[i][1]<=60 && grade[i][2]<=60){
            printf("M\n");
        }else{
            printf("F\n");
        }
    }
    return 0;
}