//
//  Queue.c
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/17/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "Queue.h"

//Queue Implementation [FirstInFirstOut - FIFO]:
/*
 Points To Remember:
 1)Queuing: Adds an Element
 2)To back to the Queue
 3)Dequeuing: Remove the element from first order
 
 Algorithm:
 1)Will have two variables called front,back. Front to address the first index always and Back will be identified the index which we have inserted or deleted the element
 */

#define MAX 2

int front = -1, back = -1;
int q_array[MAX];

void queue(int element) {
    if (back > MAX - 1) {
        printf("Queue OverFlow\n");
        return;
    }
    if (back == -1) {
        front++;
    }
    back++;
    q_array[back] = element;
    printf("%d is Queued\n",element);
}

void dequeue() {
    if (front < 0) {
        printf("Queue UnderFlow\n");
    }else {
        int x = q_array[front];
        printf("%d is Dequeued\n",x);
        if (front == back) {
            back = -1;
            front = -1;
        }else {
            front++;
        }
    }
}

void isQueueEmpty() {
    if (front < 0) {
        printf("Queue is Empty\n");
    }else {
        printf("Queue is not Empty\n");
    }
}
