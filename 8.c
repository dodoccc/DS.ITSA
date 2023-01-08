#include <stdio.h>
int isPrime(int n){
    if(n==1)    return -1;
    else{
        for(int k=2;k<n;k++){
            if(n%k==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n,ans;
    scanf("%d",&n);
    ans=isPrime(n);
    if(ans==0)
        printf("NO\n");
    else
        printf("YES\n");
}