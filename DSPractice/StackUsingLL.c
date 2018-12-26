//
//  StackUsingLL.c
//  DSPractice
//
//  Created by Ranjith Kumar on 12/26/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "StackUsingLL.h"
#include <stdlib.h>

struct Node {
  int data;
  struct Node *link;
};

struct Node *slTop;

//Time Complexity:0(1), We are not traversing and simply creating a node and inserting at the begining
void pushElementAtBeginning(int element) {
  struct Node *temp;
  temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = element;
  if (slTop == NULL) {
    temp->link = NULL;
  }else {
    temp->link = slTop;
  }
  slTop = temp;
}

//Time Complexity:0(n) //We are traversing till the last node
void pushElementAtEnd(int element) {
  struct Node *temp;
  temp = slTop;
  while (temp->link!=NULL) {
    temp = temp->link;
  }
  struct Node *newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = element;
  newNode->link = NULL;
  temp->link = newNode;
}

//Pop
//Time Complexity:0(1)
void deleteElementAtBegining() {
  struct Node *temp;
  temp = slTop->link;
  free(slTop->link);
  slTop = temp;
}

//Pop
//Time Complexity:0(n)
void deleteElementAtEnd() {
  struct Node *temp;
  temp = slTop->link;
  struct Node *prevTemp = slTop;
  while (temp->link!=NULL) {
    temp = temp->link;
    prevTemp = prevTemp->link;
  }
  prevTemp->link = NULL;
  free(prevTemp->link);
}

void displayAll() {
  struct Node *temp;
  temp = slTop;
  while (temp!=NULL) {
    printf("%d\n",temp->data);
    temp = temp->link;
  }
}
