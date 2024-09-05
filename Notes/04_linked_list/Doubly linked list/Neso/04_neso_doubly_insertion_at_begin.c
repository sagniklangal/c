#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};

//Add at begining
struct node* add_at_begin(struct node* head,int data){
    //Creating new node "temp" and storing data
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    //Linking temp and head node
    temp->next=head;
    head->prev=temp;
    //Updating head
    head=temp;
    return head;
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
    
    printf("Enter node data to be inserted: ");
    scanf("%d",&data);
    
    //Calling function
    head = add_at_begin(head,data);
    
    //Printing after insertion at begin
    printf("After insertion at begin the nodes are: ");
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}