//
//  InfixToPostfixExpressionCheck.c
//  DSPractice
//
//  Created by Ranjith Kumar on 1/10/19.
//  Copyright © 2019 DrawRect. All rights reserved.
//

#include "InfixToPostfixExpressionCheck.h"


int rkTop=-1;
int rkSize = 9;
int rkStack[9];

void rkPush(int element) {
  if (rkTop > rkSize-1) {
    printf("stack overflow");
  }else {
    rkTop++;
    rkStack[rkTop] = element;
    printf("%d element pushed at %d\n",element,rkTop);
  }
}

int rkPop() {
  if (rkTop < 0) {
    printf("stack is empty\n");
    return 0;
  }else {
    int element = rkStack[rkTop];
    rkTop--;
    return element;
  }
}

int evaluate(int op2,int op1,char operator) {
  switch (operator) {
    case '+':
      return op2 + op1;
      break;
    case '*':
      return op2 * op1;
      break;
    case '-':
      return op2 - op1;
      break;
    case '/':
      return op2 / op1;
      break;
    default:
      break;
  }
  return 0;
}

int outPut(char input[]) {
  int i=0;
  while(input[i]) {
    if((input[i] != '+') && (input[i] != '-') && (input[i] != '*') && (input[i] != '/')) {
      int digit = input[i] - 48;
      rkPush(digit);
    }else {
      int op1 = rkPop();
      int op2 = rkPop();
      int result = evaluate(op2, op1, input[i]);
      rkPush(result);
    }
    i++;
  }
  return rkPop();
}
