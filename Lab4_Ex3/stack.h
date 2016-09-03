//
//  stack.h
//  Lab4_Ex3
//
//  Created by Christos Karolemeas on 31/08/16.
//  Copyright © 2016 Christos Karolemeas. All rights reserved.
//

#ifndef stack_h
#define stack_h

#define STACK_SIZE 10
#define TRUE 1
#define FALSE 0

typedef int elem;

struct stack {
    elem array[STACK_SIZE];
    int top;
};

typedef struct stack STACK;

void ST_init(STACK *s);
int ST_empty(STACK s);
int ST_full(STACK s);
int ST_push(STACK *s, elem x);
int ST_pop(STACK *s, elem *x);

#endif /* stack_h */
