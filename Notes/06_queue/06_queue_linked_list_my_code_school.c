#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
}; 

struct node* front = NULL;
struct node* rear = NULL;

//isEmpty()
int isEmpty(){
    if (front==NULL && rear==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

//Enqueue()
void enqueue(int data){
    struct node* temp=malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("Overflow\n"); //Checking if memory could be allocated or not
    }
    
    temp->data=data;
    temp->link=NULL;
    if(isEmpty())
    {
        front=rear=temp;
        return;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
}

//Dequeue()
int dequeue() {
    int value;
    if (isEmpty() || front==NULL) {
        printf("Queue underflow\n");
        exit(1);
    }
    else{
        value=front->data;
        struct node* temp = front;
        front=front->link;
        free(temp);
        }
    return value;
}

//peek() or front()
int peek() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    return front->data;
}

//rear()
int rear_print() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    return rear->data;
}

//Printing values
void print() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return;
    }
    struct node* temp = front;
    printf("The elements are: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
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