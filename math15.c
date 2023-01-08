#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=100 && a>=0 && b>=0 && b<=100)
        printf("inside\n");
    else
        printf("outside\n");
}