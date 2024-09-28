#include<stdio.h>

int main(){
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d\n", a);
    printf("The address of variable a is %u\n", ptr);
    printf("The value of variable a is %d\n", *ptr);//When we use *ptr the value in the address stored here is printed
    return 0;
}