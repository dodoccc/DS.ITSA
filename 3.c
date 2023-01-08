#include <stdio.h>

int main(){
    int a,b;
    int radius=100;
    while(scanf("%d %d",&a,&b)!=EOF){
        if ((a*a+b*b)<=radius*radius)
            printf("inside\n");
        else
            printf("outside\n");
    }
}