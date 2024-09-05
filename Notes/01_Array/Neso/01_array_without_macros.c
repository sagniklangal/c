#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i<5;i++){
       scanf("%d\n",&a[i]);
    }
    for(int i=0; i<5;i++){
        printf("The elements are %d\n",a[i]);
    }

    return 0;
}