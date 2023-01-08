#include <stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    a-=0.001;
    printf("%d\n",(int)(a/0.238)+1);
}