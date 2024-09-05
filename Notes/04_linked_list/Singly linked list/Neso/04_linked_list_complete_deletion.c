#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};
//Completely deletion
struct node* com_delete(struct node* head){
    struct node* temp= malloc(sizeof(struct node));
    temp = head;
        
        while(temp!=NULL)
        {
        // head = head->link;
        // free(temp);
        // temp=NULL;
        // temp=head;
        
        //Alternative
        temp=temp->link;
        free(head);
        head = temp;
        }
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

    //deleting entire linked list
    head = com_delete(head);

    //After deleting entire, now counting
    count(head);

    if (head == NULL)
    {
       printf("The linked list has been deleted successfully");
    }
    return 0;
}