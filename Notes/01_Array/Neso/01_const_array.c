#include<stdio.h>
int main(){
    const int a[]={1,2,3,4,5,6,7};
    a[0]=4; //Not possible due to "const" keyword
    return 0;
}