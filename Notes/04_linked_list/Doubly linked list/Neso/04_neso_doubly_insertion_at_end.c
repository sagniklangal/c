#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
//Adding at end
void add_end(struct node* head,int data){
    //Creating a new node and adding data
    struct node* temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    //Traversing until last node
    struct node* traverse = malloc(sizeof(struct node));
    traverse = head;
    while(traverse->next!=NULL)
    {
        traverse=traverse->next;
    }
    //Linking
    traverse->next=temp;
    temp->prev=traverse;
    //As we are adding at end, so we are not interfering with head
    //So, returning head is not necessary
    // return head;
}

//Adding first node
struct node* add_first(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    
    return head;
}
int main(){
    //First node creation
    struct node* head = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("Enter first node data: ");
    scanf("%d",&data);
    head = add_first(head,data);
    
    //Inserting at end
    printf("Enter new node data: ");
    scanf("%d",&data);
    // head = add_end(head,data);
    add_end(head,data);
    
    //Printing after insertion at end
    printf("After insertion at end the nodes are: ");
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}