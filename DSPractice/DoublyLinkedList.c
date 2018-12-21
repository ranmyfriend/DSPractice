//
//  DoublyLinkedList.c
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/21/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "DoublyLinkedList.h"

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

//head
struct Node *head;

struct Node* createNode(int value) {
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void createHeadNode(int value) {
    struct Node *temp;
    temp = createNode(value);
    head = temp;
    printf("%d inserted in List\n",value);
}

void insertNodeAtEnd(int value) {
    if (isDLListEmpty()) {
        return;
    }
    struct Node *temp;
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    struct Node *newNode;
    newNode = createNode(value);
    newNode->prev = temp;
    temp->next = newNode;
}

void insertNodeAtBeg(int value) {
    if (isDLListEmpty()) {
        return;
    }
    
    struct Node *newNode;
    newNode = createNode(value);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

bool isDLListEmpty(void) {
    if (head == NULL) {
        printf("List is Empty.\n");
        return true;
    }
    return false;
}

void displayAllNodes() {
    if (isDLListEmpty()) {
        return;
    }
    printf("-----List of Nodes----\n");
    struct Node *temp;
    temp = head;
    while (temp != NULL) {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

void reverseAllNodes() {
    if (isDLListEmpty()) {
        return;
    }
    printf("------(Reverse) List of Nodes---\n");
    struct Node *temp;
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d\n",temp->data);
        temp = temp->prev;
    }
}
