#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int ans=1;
    if(a>31){
        printf("Value of more than 31\n");
        return 0;
    }
    while(a>0){
        ans*=2;
        a--;
    }
    printf("%d\n",ans);
}
