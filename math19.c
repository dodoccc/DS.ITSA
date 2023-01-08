#include <stdio.h>

int main(){
    int a;
    float fee=0;
    scanf("%d",&a);
    fee=a*0.9;
    if(a>=1500) fee*=0.79;
    else if (a>800 && a<1500)  fee*=0.9;
    printf("%.1f\n",fee);
}