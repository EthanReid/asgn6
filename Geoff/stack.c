#include "stack.h"
#include <stdio.h>

int myStack[10];
int stackSize = 0;

int push(int value) {
    if (stackSize == 10) {
        return 1;
    }

    myStack[stackSize] = value;
    stackSize++;
    return 0;
}

int pop(int *value) {
    if (stackSize > 0) {
        *value = myStack[stackSize - 1];
        stackSize--;
        return 0;
    }

    return 1;
}

void printStack(int format) {
    int i;
    if (format == 0) {
        for (i = 0; i < stackSize; i++) {
            printf("%d ", myStack[i]);
        }
        printf("\n\n");
    } else if (format == 1) {
        for (i = 0; i < stackSize; i++) {
            printf("%x ", myStack[i]);
        }
        printf("\n\n");
    } else if (format == 2) {
        for (i = 0; i < stackSize; i++) {
            printf("%c ", myStack[i]);
        }
        printf("\n\n");
    }
}
