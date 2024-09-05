#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};

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

//Insertion at any position

struct node* insert_any(struct node* head,int pos,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    
    // For position 1
    if(pos==1){
        struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    head = ptr;
    }
    
    //For positions other than 1
    
    else
    {// for (int i = 1; i < pos-1; i++)
    // {
    //     ptr=ptr->link;
    // }
    //
    pos--;
    while(pos!=1){
        ptr=ptr->link;
        pos--;
    }
    temp->link=ptr->link;
    ptr->link=temp;
    }
    return head;
}

int main(){
    //Creating the list
    
    struct node* head = malloc(sizeof(struct node));
    head->data= 45;
    head->link= NULL;
    
    insert_end(head,90);
    insert_end(head,100);
    insert_end(head,60);
    insert_end(head,70);

    //Inserting at any position(Including first and also add to the end)
    head=insert_any(head,5,55);
    
    //Printing nodes
    struct node* ptr = malloc(sizeof(struct node));
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}