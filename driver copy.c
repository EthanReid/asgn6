/*
driver.c, stack.c, stack.h
Ethan Reid
I worked with Geoff Blaylock but we both went different routes so are turning in different assignments.
*/
#include <stdio.h>
#include "stack.h"

int main() {
    char nextChar;
    int nextInt;
    int mode = 0;
    int conditional = 1;
    int popVal = 0;

    printf("Welcome to the stack program\n\n");
    
    while (conditional == 1) {
        char enter[] = "Enter an option: ";
        printf("%s", enter);
        scanf(" %c", &nextChar);

        if (nextChar == 117) {
            printf("What number? ");
            scanf("%d", &nextInt);
            if (push(nextInt) == 1){
                printf("Overflow!!!\n");
            }
            printStack(mode);
        } else if (nextChar == 111) {
            if (pop(&popVal) == 1) {
                printf("Undeflow!!!\n");
                printStack(mode);
            }else{
                printf("Popped ");
                printf("%d\n", popVal);
                printStack(mode);
            }
        } else if (nextChar == 104) {
            mode = 1;
            printStack(mode);
        } else if (nextChar == 99) {
            mode = 2;
            printStack(mode);
        } else if (nextChar == 100) {
            mode = 0;
            printStack(mode);
        } else if (nextChar == 120) {
            printf("Goodbye!");
            conditional = 0;
        }

        printf("\n");
    }
    return 0;
}
