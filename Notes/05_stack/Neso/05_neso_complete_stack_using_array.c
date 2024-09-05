#include<stdio.h>
#include <stdlib.h>
#define n 5
int a[n];
int top = -1;

//isFull()
int isFull(){
    if (top==n-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

//isEmpty()
int isEmpty(){
    if (top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

//Push()
void push(int data){
    if(isFull())
    {
        printf("Stack overflow");
        return;
    }
    
    top=top+1;
    a[top]=data;
}

//pop()
int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    int value = a[top];
    top--;
    return value;
}

//peek()
int peek() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    return a[top];
}

void print() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(){
    while(1)
    {
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Print all the elements of the stack\n");
    printf("5. Quit\n");
    printf("Enter your choice: ");

    int trigger;
    int data;
    scanf("%d",&trigger);

    switch (trigger)
    {
    case 1:
        printf("enter the element: ");
        scanf("%d",&data);
        push(data);
        break;
    case 2:
        printf("The element popped is %d\n",pop());
        break;
    case 3:
        printf("The top element is %d\n",peek());
        break;
    case 4:
        print();
        break;
    case 5:
        exit(1);
        break;
    default:
        printf("Wrong choice\n");
        break;
    }
    }
    
    return 0;
}