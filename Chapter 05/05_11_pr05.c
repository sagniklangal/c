#include<stdio.h>

int main(){
    int a=6;
    
    //In gcc compiler arguements are passed from right to left
    printf("%d %d %d", a, ++a, a++);
    return 0;
}