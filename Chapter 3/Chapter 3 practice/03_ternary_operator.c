#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    (a<10) ? printf("a is less than 10") : printf("a is greater than 10");
    return 0;
}