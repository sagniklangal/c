#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};

//Print the elements
void print(struct node* head){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr=head;
    printf("The elements are\n");
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->link;
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

//Insertion at the begin
struct node* insert_begin(struct node* head, int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    head = ptr;
    
    return head;
}

//Insertion at certain position
void insert_certain(struct node* head,int pos,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    
    for (int i = 1; i < pos-1; i++)
    {
        ptr=ptr->link;
    }
    temp->link=ptr->link;
    ptr->link=temp;
    
}
//Deletion at end
struct node* end_del(struct node* head) {
    if (head == NULL) {
        printf("The list is empty\n");
        return NULL; // Return NULL since the list is empty.
    }
    else if (head->link == NULL) {
        printf("There is only one element in the linked list\n");
        free(head); // Free the memory of the single node.
        return NULL; // Return NULL to indicate an empty list.
    }
    else {
        struct node* temp = head;
        struct node* temp2 = NULL;

        while (temp->link != NULL) {
            temp2 = temp;
            temp = temp->link;
        }

        temp2->link = NULL;
        free(temp);
        return head;
    }
}

//Deletion at the begin
struct node* del_begin(struct node* head){
    struct node* temp = malloc(sizeof(struct node));
    temp=head;
    head=head->link;
    
    temp->link = NULL;
    free(temp);
    
    return head;
}

//Count the number of elements
void count(struct node* head){
    struct node* temp = NULL;
    int count=0;
    temp=head;
    //temp->link = head->link;
    while(temp!=NULL){
        count++;
        temp = temp->link;
        
    }
    printf("The number of elements are %d\n", count);
}
int main() {
    //First node
    struct node* head = malloc(sizeof(struct node));
    head->data= 45;
    head->link= NULL;
    printf("%d\n", head->data);
    
    //Second node
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 90;
    ptr->link = NULL;
    
    //Linking 1st and 2nd node
    head->link = ptr;
    printf("%d\n", ptr->data);
    
    //3rd node
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 100;
    ptr->link = NULL;
    
    //Linking 2nd and 3rd node
    head->link->link = ptr;
    printf("%d\n", ptr->data);
    
    //Counting the no of nodes
    count(head);
    
    //Deleting the last node
    end_del(head);
    count(head);
    
    //Inserting at the end
    insert_end(head, 48);
    
    count(head);
    
    //Printing the elements 
    print(head);
    
    //Insertion at the beginning
    head = insert_begin(head, 67);
    print(head);
    
    //Deletion at the end
    head = del_begin(head);
    print(head);
    
    head = insert_begin(head, 89);
    print(head);
    
    //Insertion at any location
    head = in_any(head, 50, 1);
    print(head);
    
    return 0;
}