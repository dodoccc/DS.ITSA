#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char oper;
    int re1,im1,re2,im2;
    int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        scanf(" %c %d %d %d %d",&oper,&re1,&im1,&re2,&im2);
        switch(oper){
            case '+':
                ans1=re1+re2;
                ans2=im1+im2;
                break;
            case '-':
                ans1=re1-re2;
                ans2=im1-im2;
                break;
            case '*':
                ans1=re1*re2-im1*im2;
                ans2=re1*im2+re2*im1;
                break;
        }
        printf("%d %d\n",ans1,ans2);
    }
}