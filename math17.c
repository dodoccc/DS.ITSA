#include <stdio.h>
int gcd(int a,int b){
    int r;
    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
}