#include<stdio.h>
#define n 5 //We have to change the value of 'n' only once here
int main(){
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}