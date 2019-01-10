//
//  Stack.c
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/17/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "Stack.h"

//Stack Implementation [LastInFirstOut - LIFO]:
/*
 Points To Remember:
 
 1)Collection of Objects accessed from one end
 2)Push - for Addition
 3)Pop - for deletion
 4)Constraint - All operations on Top of Stack
 
 Algorithm:
 
 1)Get the Length of the elements we are going to store it on Array
 2)Create one variable(ie.top and initialize with -1) and when we want to append increase the top and use this as index to insert in an Array. And if we want to pop out the value use this as index from Array. When we are doing as poping by default we will get to know where we have insereted last time, before we do this check whether this top should be greater than 0 otherWise Stack is Underflow
 3)When we insert we have to check the length. Because here we may get an error like. StackOverFlow
 4)Stack is Empty. This is will happen if we popped out of all the values from the stack.
 
 Lets get into the Code:
 */

#define MAX 2

//int array[MAX],top=-1;
//
//void push(int element) {
//    
//    if (top > MAX-1) {
//        printf("Stack Overflow\n");
//        return;
//    }
//    
//    top++;
//    array[top] = element;
//    printf("%d pushed into Stack\n",array[top]);
//    
//}
//
//void pop() {
//    if (top < 0) {
//        printf("Stack Under Flow");
//    }else {
//        int x = array[top--];
//        printf("%d popped from Stack\n",x);
//    }
//}
//
//void isEmpty() {
//    if (top < 0) {
//        printf("Stack is Empty");
//    }else {
//        printf("Stack is not Empty");
//    }
//    printf("\n");
//}
