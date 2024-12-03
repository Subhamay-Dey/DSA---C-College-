#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node before a given node in the doubly linked list
void insertBefore(struct Node** head, struct Node* givenNode, int data) {
    if (givenNode == NULL) {
        printf("The given node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(data);

    // Update pointers to insert the new node
    newNode->next = givenNode;
    newNode->prev = givenNode->prev;

    if (givenNode->prev != NULL) {
        givenNode->prev->next = newNode;
    } else {
        // If the given node is the head, update the head pointer
        *head = newNode;
    }

    givenNode->prev = newNode;
}

// Function to display the list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test the insertion
int main() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    // Linking the initial list
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Display the list before insertion
    printf("Doubly Linked List before insertion: ");
    displayList(head);

    // Insert a node before the second node
    insertBefore(&head, second, 15);

    // Display the list after insertion
    printf("Doubly Linked List after insertion: ");
    displayList(head);

    return 0;
}
