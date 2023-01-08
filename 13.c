#include <stdio.h>
#include <string.h>
void bubble_sort(char *s,int *n,int m){
    int k;
    char t;
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(n[i]>n[j]){
                k=n[i];
                t=s[i];
                n[i]=n[j];
                s[i]=s[j];
                n[j]=k;
                s[j]=t;
            }
        }
    }
}
int main(){
    int k,m=0;
    scanf("%d\n",&k);
    char r[40];
    char s[100];
    int n[100];
    for(int i=0;i<k;i++){
        gets(r);
        int size=strlen(r);
        for(int j=0;j<size;j++){
            if(r[j]=='H'){
                s[m]=r[j];
                n[m]=r[j+1]-'0';
                m+=1;
            }
            else if(r[j]=='D'){
                s[m]=r[j];
                n[m]=r[j+1]-'0';
                m+=1;
            }
            else if(r[j]=='S'){
                s[m]=r[j];
                n[m]=r[j+1]-'0';
                m+=1;
            }
            else if(r[j]=='C'){
                s[m]=r[j];
                n[m]=r[j+1]-'0';
                m+=1;
            }
        }
        bubble_sort(s,n,m);
        for(int l=0;l<m;l++){
            printf("%c%d ",s[l],n[l]);
        }
        printf("\n");
    }

}