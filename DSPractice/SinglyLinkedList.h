//
//  SinglyLinkedList.h
//  UdemyDSCourse
//
//  Created by Ranjith Kumar on 12/20/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

#include <stdio.h>

void create_node(int n);
void create_node_end(int n);
void display_all_nodes(void);
void create_node_at_begining(int n);
void delete_node_at_end(void);
void delete_node_using_position(int position);
void search_node_using_value(int value);
void insert_node_at_position(int position,int value);
void reverse(void);
void isSLEmpty(void);

#endif /* SinglyLinkedList_h */
