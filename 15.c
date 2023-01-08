#include <stdio.h>
#include <string.h>

int main(){
    char s[110];
    char k[26];
    for(int i=0;i<26;i++){
        k[i]=97+i;
    }
    int size=0;
    while(1){
        scanf("%c",&s[size]);
        if(s[size]=='\n')
            break;
        size++;
    }
    for(int i=0;i<size;i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
    }
    int cnt[26]={0};
    int word=1;
    for(int i=0;i<size;i++){     
        if((s[i]==32)){
            word+=1;
        }
        for(int j=0;j<26;j++){
            if(s[i]==k[j]){
                cnt[j]+=1;
            }
        }
    }
    printf("%d\n",word);
    for(int i=0;i<26;i++){
        if(cnt[i]!=0){
            printf("%c : %d\n",k[i],cnt[i]);
        }
    }
}