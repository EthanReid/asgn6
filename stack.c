#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"

struct Stacks stack;

int push(int value){
    if (stack.index > maxSize){
        return 1;
    }else{
        stack.frame[stack.index] = value;
        stack.index++;
        return 0;
    }
};

int pop(int *value){
    if (stack.index<=0){
        return 1;
    }else{
        stack.index--;
        *value = stack.frame[stack.index];
        stack.frame[stack.index] = 0;
        return 0;
    } 
};

int printStack(int format){
    int printIndex = 0;
    printf("Stack: ");
    while (printIndex < stack.index){
        printElement(stack.frame[printIndex], format);
        printf(" ");
        printIndex++;
    }
    printf("\n");
    return 0;
}

int printElement(int value, int format){
    switch(format){
        case 2:
            printf("%c", value);
            break;
        case 1:
            printf("%x", value);
            break;
        case 0:
            printf("%d", value);
            break;
        default:
            break;
    }
    return 0;
}

/* everything in main is just for test, not to included in the submitted version*/
