#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
int main(){
    //First node creation
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=10;
    head->next=NULL;
    return 0;
}