#include <stdio.h>

int main(){
    int dec,bin[8];
    scanf("%d",&dec);
    if(dec<0) dec+=256;
    for(int i=0;i<8;i++){
        bin[i]=dec%2;
        dec/=2;
    }
    for(int i=7;i>=0;i--){
        printf("%d",bin[i]);
    }
    printf("\n");
}