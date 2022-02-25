#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"

struct Stacks stack;

int push(int Value){
    stack.index = Value;
    return 0;
};

int main(){
    push(5);
    printf("%d\n", stack.index);
}