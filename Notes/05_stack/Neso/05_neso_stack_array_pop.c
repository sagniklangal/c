//Incomplete
#include<stdio.h>
#define n 4 //No semicolon here
int top=-1;
int arr[n];
void push(int data){
    if(top==n-1){
        printf("Stack overflow\n");
    }
    top=top+1;
    arr[top]=data;
}
int pop(){
    if(top==-1){
        printf("Stack underflow\n");
    }
    int value = arr[top];
    top=top-1;
    return value;
}
int main(){
    int pop_data;
    push(4);
    push(5);
    push(6);
    push(7);

    pop_data=pop();
    printf("%d",pop_data);
    pop();
    pop();
    pop();
    pop();
    return 0;
}