#include <stdio.h>
#include <math.h>

int main(){
    double a=0;
    double square=0;
    scanf("%lf",&a);
    square=a*a;
    square=(square*10+0.5);
    square=floor(square)/10;
    printf("%.1lf\n",square);
}