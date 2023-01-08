#include <stdio.h>

int fab(int n){
    if(n==0)    return 1;
    else{
        return fab(n-1)+fab(n/2);
    }
}

int main(){
    int k,ans;
    scanf("%d",&k);
    ans=fab(k);
    printf("%d\n",ans);
}

