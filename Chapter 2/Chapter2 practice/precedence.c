#include<stdio.h>
int main(){
    int x=2, y=3;
    printf("The value of 8*y / 3*x is: %d\n", 8*3/3*2);
    // Works only in the absense of parenthesis
    // (8*3)
    // (24/3)
    // (8*2)
    // 16
    printf("The value of 8*y / 3*x is: %d\n", (8*3)/(3*2));
    return 0;
}