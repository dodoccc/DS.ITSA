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
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=gcd(a,b);
    printf("%d\n",ans);
}