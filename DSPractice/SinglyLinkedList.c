//
//  SinglyLinkedList.c
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/20/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "SinglyLinkedList.h"
#include <stdbool.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
}*start;

void isSLEmpty(void) {
    if (start == NULL) {
        printf("List is Empty\n");
    }else {
        printf("List is not Empty\n");
    }
}

void create_node(int n) {
    if (start == NULL) {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = n;
        temp->link = NULL;
        start = temp;
    }else {
        create_node_end(n);
    }
}

void create_node_at_begining(int n) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;
    
    if (start == NULL) {
        start = temp;
    }else {
        temp -> link = start;
        start = temp;
    }
}

void delete_node_at_begining() {
    if (start == NULL) {
        printf("List is Empty\n");
    }else {
        struct node *temp;
        temp = start;
        start = temp->link;
    }
}

void delete_node_at_end() {
    if (start == NULL) {
        printf("List is Empty\n");
    }else {
        struct node *temp;
        struct node *prev_temp;
        temp = start->link;
        prev_temp = start;
        while (1) {
            if (temp->link != NULL) {
                temp = temp->link;
                prev_temp = prev_temp->link;
            }else {
                break;
            }
        }
        prev_temp->link = NULL;
    }
}

void delete_node_using_position(int position) {
    if (start == NULL) {
        printf("List is Empty\n");
    }else if (start->link == NULL){
        if (position<1) {
            printf("%d deleted at position(%d)\n",start->data,position);
            start = NULL;
        }else {
            printf("Oops. Entered position is out of range :(\n");
        }
    }else {
        struct node *temp;
        temp = start->link;
        struct node *prev_temp;
        prev_temp = start;
        int i;
        for (i=0; i<position; i++) {
            if (temp->link == NULL) {
                printf("Oops. Entered position is out of range :(\n");
                return;
            }else {
                temp = temp->link;
                prev_temp = prev_temp->link;
            }
        }
        printf("%d deleted at position(%d)\n",prev_temp->data,position);
        prev_temp->link = temp->link;
    }
}

void create_node_end(int value) {
    struct node *temp;
    temp = start;
    while (1) {
        if (temp->link != NULL) {
            temp = temp->link;
        }else {
            break;
        }
    }
    struct node *newElement;
    newElement = (struct node*)malloc(sizeof(struct node));
    newElement->data = value;
    newElement->link = NULL;
    temp->link = newElement;
}

void search_node_using_value(int value) {
    if (start == NULL) {
        printf("No Nodes you have entered so far:\n\n");
    }else {
        struct node *temp;
        temp = start;
        bool isFound = false;
        while (1) {
            if (temp->data == value) {
                printf("Node found: %d\n",temp->data);
                isFound = true;
                break;
            }else if (temp->link != NULL){
                temp = temp->link;
            }else {
                break;
            }
        }
        if (isFound == false) {
            printf("%d value is not found in the List\n",value);
        }
    }
}

void insert_node_at_position(int position,int value) {
    if (start == NULL) {
        printf("Invalid position you have entered :(\n\n");
    }else {
        struct node *temp;
        temp = start;
        int i;
        for(i=0;i<position;i++) {
            temp = temp->link;
        }
        if (temp->link == NULL) {
            struct node *firstNode;
            firstNode = (struct node*)malloc(sizeof(struct node));
            firstNode->data = value;
            firstNode->link = NULL;
            start = firstNode;
        }else {
            struct node *newNode;
            newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = value;
            newNode->link = temp->link;
            temp->link = newNode;
        }
    }
}

void reverse() {
    struct node *prev = NULL;
    struct node *next = NULL;
    struct node *current = start;
    while (current!=NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    start = prev;
}

void dispaly_all_nodes() {
    if (start == NULL) {
        printf("No Nodes you have entered so far :(\n\n");
    }else {
        printf("------Display all Nodes------:\n");
        struct node *temp;
        temp = start;
        while (1) {
            if (temp != NULL) {
                printf("%d\n",temp->data);
                temp = temp->link;
            }else {
                break;
            }
        }
        
    }
}






