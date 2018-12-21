//
//  DoublyLinkedList.h
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/21/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isDLListEmpty(void);
struct Node* createFreshNode(int);
void insertNodeAtEnd(int value);
void insertNodeAtBeg(int value);
void displayAllNodes(void);
void reverseAllNodes(void);


#endif /* DoublyLinkedList_h */
