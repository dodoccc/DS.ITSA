#include <stdio.h>

int main(){
    int dec,bin[8];
    scanf("%d",&dec);
    if(dec<0) dec+=256;
    int i=0;
    while(i<8){
        bin[i]=dec%2;
        dec/=2;
        i++;
    }
    for(int i=7;i>=0;i--){
        printf("%d",bin[i]);
    }
    printf("\n");
}