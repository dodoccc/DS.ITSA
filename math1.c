#include <stdio.h>

int main(){
    int a,b,c;
    float d;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b)*c/(2.0);
    printf("Trapezoid area:%.1f\n",d);
}