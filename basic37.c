#include <stdio.h>

int main()
{
    int dot[4];
    int i,j;
    int counts=0;
    int flag=0;
    int max=0;
    for(i=0;i<4;i++){
        scanf("%d",&dot[i]);
    }

    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(dot[i]==dot[j]) { counts++; }
        }
    }
 //   printf("%d\n",counts);
    if(counts==6){ printf("WIN\n"); return;}
    else if(counts==3||counts==0){ printf("R\n"); return; }

    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(dot[i]==dot[j]){ flag++; }
        }
    }
    if(flag==2){
        max = dot[0];
        for(i=1;i<4;i++){
            if(dot[i]>max) { max = dot[i]; }
        }
        printf("%d\n",max*2);
        return;
    }
    else if(flag==1){
        for(i=0;i<4;i++){
            for(j=i+1;j<4;j++){
                if(dot[i]==dot[j]){ dot[j]=dot[i]=-1; break; }
            }
        }
        for(i=0;i<4;i++){
            if(dot[i]!=-1) { max+=dot[i]; }
        }
        printf("%d\n",max);
    }
    return 0;
}