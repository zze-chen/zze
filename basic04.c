#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
  
void main()  
{  
        int start_hour,leave_hour,start_min,leave_min;  
        int total,hour,fee;  
  
        scanf("%d %d", &start_hour, &start_min); 
        scanf("%d %d", &leave_hour, &leave_min); 
        hour = leave_hour - start_hour;  
        total = (hour * 60)+leave_min-start_min;  
        if(total < 120){
            fee = (total/30)*30;  
        }else if(total < 240){  
            fee = 120;  
            total -= 120;  
            fee += (total/30) * 40;  
        }else{  
            fee= 280;  
            total -= 240;  
            fee += (total/30) * 60;  
        }  
        printf("%d\n",fee);  
}  