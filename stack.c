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
        stack.frame[stack.index] = NULL;
        return 0;
    } 
};

int main(){
    int popVal = 0;
    push(5);
    printf("%d\n", stack.frame[stack.index-1]);
    printf("%d\n", stack.index);
    pop(&popVal);
    printf("popVal = %d \n", popVal);
    printf("stack value is %d\n", stack.frame[stack.index]);
    printf("%d\n", stack.index);
}
