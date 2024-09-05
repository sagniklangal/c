#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

// Function to add a node at the beginning of the linked list
struct node* add_at_begin(struct node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = head;
    
    if (head != NULL) {
        head->prev = temp;
    }
    
    head = temp;
    return head;
}

// Function to add a node at the end of the linked list
struct node* add_end(struct node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    if (head == NULL) {
        temp->prev = NULL;
        head = temp;
        return head;
    }
    
    struct node* traverse = head;
    while (traverse->next != NULL) {
        traverse = traverse->next;
    }
    
    traverse->next = temp;
    temp->prev = traverse;
    
    return head;
}

// Function to add a node at any position in the linked list
struct node* add_at_any(struct node* head, int data, int position) {
    if (position <= 1) {
        head = add_at_begin(head, data);
    } else {
        struct node* temp = head;
        int current_position = 1;
        while (temp != NULL && current_position < position) {
            temp = temp->next;
            current_position++;
        }

        if (temp == NULL) {
            head = add_end(head, data);
        } else {
            struct node* new_node = (struct node*)malloc(sizeof(struct node));
            new_node->data = data;
            new_node->prev = temp->prev;
            new_node->next = temp;
            
            if (temp->prev != NULL) {
                temp->prev->next = new_node;
            } else {
                head = new_node; // Update head if inserting at position 1
            }
            
            temp->prev = new_node;
        }
    }
    
    return head;
}

// Function to add the first node
struct node* add_first(struct node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

int main() {
    struct node* head = NULL;
    int data;
    char trigger;

    printf("Enter first node data: ");
    scanf("%d", &data);
    head = add_first(head, data);

    printf("Do you want to insert nodes? (y or n): ");
    scanf(" %c", &trigger);  // Use a space before %c to consume the newline character

    while (trigger == 'y') {
        int position;
        printf("Enter position: ");
        scanf("%d", &position);
        printf("Enter data: ");
        scanf("%d", &data);
        head = add_at_any(head, data, position);

        printf("Do you want to insert more nodes? (y or n): ");
        scanf(" %c", &trigger);  // Use a space before %c to consume the newline character
    }

    // Printing the final linked list
    printf("The final linked list is: ");
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
