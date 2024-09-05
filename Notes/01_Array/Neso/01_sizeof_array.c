#include<stdio.h>
int main(){
    int a[]={1,2,4,5,6,7,8,9,133,345};
    printf("The no of elements are %d",(sizeof(a)/sizeof(a[0])));
    return 0;
}