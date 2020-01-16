#include <stdio.h>

int main()
{
    int num;
    float total=0;

    int i;
    scanf("%d",&num);
    printf("Summer months:");

    for(i=1;i<=num;i++){
        if(i<=120){ total+=2.10; }
        else if(i>=121&&i<=330){ total+=3.02; }
        else if(i>=331&&i<=500){ total+=4.39; }
        else if(i>=501&&i<=700){ total+=4.97; }
        else if(i>=701){
            total+=5.63;
        }
    }
    printf("%.2f\n",total);
    total = 0;
    printf("Non-Summer months:");
    for(i=1;i<=num;i++){
        if(i<=120){ total+=2.10; }
        else if(i>=121&&i<=330){ total+=2.68; }
        else if(i>=331&&i<=500){ total+=3.61; }
        else if(i>=501&&i<=700){ total+=4.01; }
        else if(i>=701){
            total+=4.50;
        }
    }
    printf("%.2f\n",total);
    return 0;
}