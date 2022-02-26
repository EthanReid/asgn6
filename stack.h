#ifndef ASSIGNMENT6_STACK_H
#define ASSIGNMENT6_STACK_H

#endif

struct Stacks
{
    #define maxSize 10
    int frame [10];
    int index;
};

int push(int value);
int pop(int *value);
int printStack(int format);
int printElement(int value, int format);