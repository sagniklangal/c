#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
//Globally declaring top pointer
struct node* top = NULL;

//isEmpty function
int isEmpty(){
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}

//push function
void push(int data){
    struct node* new_node = malloc(sizeof(struct node));
    if (new_node==NULL)
    {
        printf("Stack overflow");
        exit(1);
    }
    new_node->data=data;
    new_node->link=top;
    top=new_node;
}

//pop function 
//As top is global, we don't have to return top
void pop(){
    if (isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    
    struct node* temp = top;
    top=top->link;
    printf("The deleted element is: %d\n",temp->data);
    free(temp);
    temp=NULL;
}

//peek function
int peek(){
    if (isEmpty())
    {
        printf("Stack underflow");
    }
    
    return top->data;
}

//Printing the elements
void print(){
    struct node* temp = top;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main(){
    while(1)
    {
    printf("\n1. Push\n");
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
        pop();
        break;
    case 3:
        printf("The top element is %d\n",peek());
        break;
    case 4:
        printf("The elements in the stack are: ");
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