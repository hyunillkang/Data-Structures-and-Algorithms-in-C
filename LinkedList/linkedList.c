#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createLinkedList();
void insertLinkedList(Node*, int);
void printLinkedList(Node*);

int main() {

    Node* head = createLinkedList();
    insertLinkedList(head, 1);
    insertLinkedList(head, 2);
    insertLinkedList(head, 3);
    insertLinkedList(head, 4);

    printLinkedList(head);
    printf("bbb");
}

Node* createLinkedList() {
    Node* head;
    head = NULL;
    return head;
}

void insertLinkedList(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node*));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* node = head;

    while(1) {
        if(node->next == NULL) {
            node->next = newNode;
            break;
        }

        node = node->next;
    }
}

void printLinkedList(Node* head) {
    printf("bbb\n");

    printf("%d\n", head->data);
    
}