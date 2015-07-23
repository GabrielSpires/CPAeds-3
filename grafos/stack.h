#ifndef STACK_H_
#define STACK_H_

typedef char SType;

typedef struct {
  SType array[1000];  // Vetor que contém os elementos da pilha.
  int size;  // Número de elementos na pilha.
} stack;

void make_stack(stack* s);

int empty(stack* s);

int size(stack* s);

SType top(stack* s);

void push(SType k, stack* s);

void pop(stack* s);

void copy(stack* s, stack* p);

void free_stack(stack* s);

#endif  // STACK_H_
