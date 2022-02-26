#include <stdio.h>
#include "stack.h"

int main() {
    char nextChar;
    int nextInt;
    int mode = 0;
    int conditional = 1;
    int poppedVal;
    int *poppedPtr = &poppedVal;

    printf("Welcome to the stack program\n\n");


    while (conditional == 1) {
        printf("Enter an option: ");
        scanf("%c\n", &nextChar);

        if (nextChar == 117) {
            printf("What number? ");
            scanf("%d", &nextInt);
            push(nextInt);
        } else if (nextChar == 111) {
            if (pop(poppedPtr) == 1) {
                printf("Underflow!!!");
            } else {
                push(nextInt);
                printf("Popped ");
                pop(poppedPtr);
                poppedVal = *poppedPtr;
                printf("%d\n", poppedVal);
            }
        } else if (nextChar == 104) {
            mode = 1;
        } else if (nextChar == 99) {
            mode = 2;
        } else if (nextChar == 100) {
            mode = 0;
        } else if (nextChar == 120) {
            printf("Goodbye!");
            conditional = 0;
        }

        printf("Stack: ");
        printStack(mode);
    }



}
