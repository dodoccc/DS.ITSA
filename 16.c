#include <stdio.h>
#include <string.h>

int main(){
    char ins[150],cmpstr[300];
    scanf("%s",&ins);
    scanf("%s",&cmpstr);
    int cnt=0;
    for(int i=0;i<strlen(cmpstr);i++){
        if(strncmp(cmpstr+i,ins,strlen(ins))==0)
            cnt++;
    }
    printf("%d\n", cnt);
}