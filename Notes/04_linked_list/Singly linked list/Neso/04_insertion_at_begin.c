#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};

//Insertion at the begin
struct node* insert_begin(struct node* head, int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    head = ptr;
    
    return head;
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
    head->data= 100;
    head->link= NULL;
    
    //Insertion at the beginning
    head = insert_begin(head, 90);
    head = insert_begin(head, 45);
    
    //Counting no of nodes
    count(head);

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