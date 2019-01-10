//
//  main.c
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/17/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include <stdio.h>
//#include "Stack.h"
//#include "Queue.h"
//#include "SinglyLinkedList.h"
//#include "DoublyLinkedList.h"
//#include "StackUsingLL.h"
#include "BalancedParanthesesUsingStack.h"
#include "InfixToPostfixExpressionCheck.h"

int main(int argc, const char * argv[]) {
  
  
  //Infix to PostFix Expression
  //Infix:a*b*c-d+e
  //Postfix:ab*c*d-e+
  char input[100] = "23*7*4-5+";
  int result = outPut(input);
  printf("Final Result: %d\n",result);
 
    
    //Stack
//    push(10);
//    push(20);
//    push(30);
//    pop();
//    pop();
//    
//    isEmpty();
    
    //Queue
//    queue(10);
//    queue(20);
//    queue(30);
//    dequeue();
//    dequeue();
//    dequeue();
//    isQueueEmpty();
//
//    queue(20);
//    isQueueEmpty();
//    dequeue();
//    isQueueEmpty();
    
    //SLL
//    create_node(10);
//        create_node_at_begining(9);
//    create_node(20);
//    create_node(30);
//    create_node(40);
//        //    delete_node_at_begining();
//        //    dispaly_all_nodes();
//    
//        //    delete_node_at_end();
//        //
//        dispaly_all_nodes();
//        printf("-----------------\n");
//        //    search_node_using_value(200);
//        insert_node_at_position(1, 23);
//        dispaly_all_nodes();
//        printf("-----------------\n");
//        delete_node_using_position(0);
//        dispaly_all_nodes();
//    reverse();
//    dispaly_all_nodes();
    
    
    //DLL
//    createHeadNode(10);
//    insertNodeAtEnd(11);
//    insertNodeAtBeg(9);
//    displayAllNodes();
//    reverseAllNodes();
  
  
  //Stack Using Linked List
//  pushElementAtBeginning(10);
//  pushElementAtBeginning(9);
//  pushElementAtBeginning(8);
////  pushElementAtBeginning(7);
//  deleteElementAtEnd();
//  displayAll();
  
  
  //BalancedParanthese Using Stack
  
//  char exp[100] = "({}(({})))";
//  if (areParenthesisBalanced(exp))
//    printf("Balanced \n");
//  else
//    printf("Not Balanced \n");
  
    return 0;
}
