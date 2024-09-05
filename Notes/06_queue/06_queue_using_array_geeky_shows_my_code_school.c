//After overflow, the program is still running
//But in underflow, the program stops
//If we print the deleted element in dequeue() function
//It will not stop
#include<stdio.h>
#include <stdlib.h>
#define n 5
int a[n];
int front = -1;
int rear = -1;

//isFull()
int isFull(){
    if (rear==n-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

//isEmpty()
int isEmpty(){
    if (front==-1 && rear==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

//Enqueue()
void enqueue(int data){
    if(isFull())
    {
        printf("overflow\n");
        return;
    }
    
    else if (isEmpty())
    {
        front=front+1;
        rear=rear+1;
        a[rear]=data;
    }
    
    else
    {
        rear=rear+1;
        a[rear]=data;
    }
}

//Dequeue()
int dequeue() {
    int value;
    if (isEmpty()) {
        printf("Queue underflow\n");
        exit(1);
    }
    else{
        value=a[front];
        if (front==rear) //If there is only one element
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        
        }
    return value;
}

//peek() or front()
int peek() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    return a[front];
}

//rear()
int rear_print() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    return a[rear];
}

//Printing values
void print() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(){
    while(1)
    {
    printf("\n1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek or front\n");
    printf("4. Print\n");
    printf("5. Rear\n");
    printf("6. Quit\n");
    printf("Enter your choice: ");

    int trigger;
    int data;
    scanf("%d",&trigger);

    switch (trigger)
    {
    case 1:
        printf("enter the element: ");
        scanf("%d",&data);
        enqueue(data);
        break;
    case 2:
        printf("The element popped is %d\n",dequeue());
        break;
    case 3:
        printf("The top element is %d\n",peek());
        break;
    case 4:
        print();
        break;
    case 5:
        printf("The rear element is %d\n",rear_print());
        break;
    case 6:
        exit(1);
        break;
    default:
        printf("Wrong choice\n");
        break;
    }
    }
    
    return 0;
}