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

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        // If the list is empty, the new node becomes the head
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Update pointers to insert the new node at the end
    temp->next = newNode;
    newNode->prev = temp;
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
    struct Node* head = NULL;

    // Insert nodes at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Display the list
    printf("Doubly Linked List: ");
    displayList(head);

    return 0;
}
