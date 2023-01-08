#include <stdio.h>

int main(){
    int inh,inm,ouh,oum;
    scanf("%d %d",&inh,&inm);
    scanf("%d %d",&ouh,&oum);
    int time=(ouh-inh)*60+oum-inm;
    time=time/30*30;
    int cost=0;
    while (time>0){
        if (time>240){
            cost+=60;
            time-=30;
        }
        else if(time<=240 && time>120){
            cost+=40;
            time-=30;
        }
        else{
            cost+=30;
            time-=30;
        }
    }
    printf("%d\n",cost);
}