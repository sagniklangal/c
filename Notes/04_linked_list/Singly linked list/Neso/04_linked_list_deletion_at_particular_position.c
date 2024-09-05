#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};

//Deletion at particular position
void del_specific(struct node** head,int pos){
    struct node* forward = malloc(sizeof(struct node));
    struct node* backward = malloc(sizeof(struct node));
    forward = *head;
    backward = *head;
    if(*head==NULL){
        printf("The linked list is empty");
    }
    else if(pos == 1){
        *head = forward->link;
        free(forward);
        forward = NULL;
    }
    else{
        while(pos!=1){
            backward=forward;
            forward=forward->link;
            pos--;
        }
        backward->link = forward->link;
        forward->link = NULL; // Not necessary
        free(forward);
        forward = NULL;
    }
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
    if(head==NULL){
        printf("The linked list is empty");
    }
    struct node* temp = NULL;
    int count=0;
    temp=head;
    while(temp!=NULL){
        count++;
        temp = temp->link;
        
    }
    printf("The number of elements are %d\n", count);
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

    //deletion at specific
    del_specific(&head,1);

    //After deletion, now counting
    count(head);

    //Printing after deletion
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
    return 0;
}