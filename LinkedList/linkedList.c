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
}

void printLinkedList(Node* head) {

}