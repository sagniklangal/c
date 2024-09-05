#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};
//Reverse the linked list
struct node* reverse(struct node* head){
    struct node* prev = malloc(sizeof(struct node));
    struct node* next = malloc(sizeof(struct node));
    prev = NULL;
    while(head!=NULL)
    {
    next = head->link;
    head->link = prev;
    prev=head;
    head=next;
    }
    head = prev;
    return head;
}
//Insertion at end
void insert_end(struct node* head, int data){
    struct node* ptr=malloc(sizeof(struct node));
    struct node* temp= malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    
    ptr=head;
    
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    
    ptr->link=temp;
    
}

//Count the number of elements
void count(struct node* head){
    struct node* temp = NULL;
    int count=0;
    temp=head;
    
    if(head==NULL){
        printf("The linked list is empty\n");
    }
    else {
        while(temp!=NULL)
        {
        count++;
        temp = temp->link;
        
        }
    printf("The number of elements are %d\n", count);
    }
}

int main(){
    //First node
    struct node* head = malloc(sizeof(struct node));
    head->data= 45;
    head->link= NULL;

    //Inserting at the end
    insert_end(head,90);
    insert_end(head,100);
    insert_end(head,60);
    insert_end(head,70);
    
    //After adding, now counting
    count(head);

    //reversing
    head = reverse(head);
    
    //After adding, now counting
    count(head);

    printf("After reversing, the linked list is: ");
    struct node*ptr = (struct node*)(malloc(sizeof(struct node)));
    ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    
    return 0;
}