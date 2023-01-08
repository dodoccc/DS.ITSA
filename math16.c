#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a*a+b*b<=10000)
        printf("inside\n");
    else
        printf("outside\n");
}