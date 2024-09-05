#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
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
    printf("Data is %d",head->data);
    return 0;
}