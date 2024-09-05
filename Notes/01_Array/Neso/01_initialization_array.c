#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    
    int b[] = {1,2,3,4,5};
    
    int c[4];
    c[0] = 1;
    c[1] = 2;
    c[2] = 3;
    c[3] = 4;

    int d[5];
    for(int i=0;i<5;i++){
        scanf("%d",&d[i]);
    }
    
    int e[]={0};
    for(int i=0;i<5;i++){
        scanf("%d",&d[i]);
    }
    return 0;
}