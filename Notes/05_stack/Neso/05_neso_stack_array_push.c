#include<stdio.h>
#define n 4
int top=-1;
int stack_arr[n];
void push(int data){
    if(top==n-1){
        printf("Stack overflow");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    return 0;
}