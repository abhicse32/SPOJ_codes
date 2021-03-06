/*
 * Author: <Your Name>
 * Stack data structure
 */

#ifndef STACK_H
#define STACK_H

typedef struct Stack_ {
          int data;
          struct Stack_* link;

} Stack;

// Create a new empty stack
Stack* stack_new();
// Deletes the stack, frees memory.
Stack* stack_delete( Stack* st );

// Inserts @val to the top of the stack
Stack* stack_push( Stack* st, char val );
// Remove the element at the top of the stack - also frees memory
Stack* stack_pop( Stack* st );

// Returns the element currently at the top of the stack. If the stack is empty,
// @error should be set to 1, else 0.
char stack_top( Stack* st);

// Returns the number of elements in the stack
int stack_size( Stack* st );
// Prints the elements currently in the stack
void stack_print( Stack* st );

#endif // STACK_H

