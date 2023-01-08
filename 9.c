#include <stdio.h>

int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=3;i<n+1;i+=3){
        cnt+=i;
    }
    printf("%d\n",cnt);
}