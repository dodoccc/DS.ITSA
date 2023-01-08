#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(i!=m-1)
                printf("%d ",mat[i][j]);
            else
                printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}   