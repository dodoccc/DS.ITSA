#include <stdio.h>
#include <string.h>
int main(){
        char s[100000];
        scanf("%s",&s);
        int size=strlen(s); 
        char k[size];
        for(int i=0;i<size;i++){
            k[i]=s[size-1-i];
        }
        for(int j=0;j<size;j++){
            if(k[j]!=s[j]){
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
}