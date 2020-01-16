#include <stdio.h>

int main(){
    int a,b;
    int sum1=0, sum2=0,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        for(int i=b;i<=a;i++){
            sum+=i;
        }
        printf("%d\n",sum);
    }else if(a<b){
        for(int i=a;i<=b;i++){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}