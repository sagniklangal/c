#include<stdio.h>
int main(){
    int a[2][3];
    a[0][0]=1;
    a[0][1]=2;
    a[0][2]=3;
    a[1][0]=4;
    a[1][1]=5;
    a[1][2]=6;
    
    
    // int (*p)[3]=a;

    printf("%d\n", a);
    printf("%d\n", *a);
    printf("%d\n", *(*a));
    return 0;
}