#include <stdio.h>

int main(){
    int moon;
    scanf("%d",&moon);
    if (moon>=3 && moon<=5)
            printf("Spring\n");
        else if (moon>=6 && moon<=8)
            printf("Summer\n");
        else if (moon>=9 && moon<=11)
            printf("Autumn\n");
        else
            printf("Winter\n");
}