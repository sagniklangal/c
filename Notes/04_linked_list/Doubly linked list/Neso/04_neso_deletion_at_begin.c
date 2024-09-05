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

//Deletion at begin
struct node* del_begin(struct node* head){
    // struct node* temp = malloc(sizeof(struct node));
    // temp=head;
    // head=head->next;
    // free(temp);
    // temp=NULL;
    // return head;
    
    //Alternate
    head = head->next;
    free(head->prev);
    return head;
}
int main(){
    //First node creation
    struct node* head = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("Enter first node data: ");
    scanf("%d",&data);
    head = add_first(head,data);

    int n;
    printf("How many nodes do you want to insert? ");
    scanf("%d",&n);
    int i=0;
    
    printf("Enter the nodes: ");
    while(i!=n){
        scanf("%d",&data);
        add_end(head,data);
        i++;
    }
    // for(i=0;i<n;i++){
    //     scanf("%d",&data);
    //     add_end(head,data);
    // }
    
    //printing after adding
    printf("After adding the nodes are: ");
    struct node* ptr = head;
    while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
    
    //Deleting the first node
    head = del_begin(head);
    printf("\nAfter deleting the first node the elements are: ");
    
    //Printing after deleting the first node
    ptr = head;
    while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
    return 0;
}