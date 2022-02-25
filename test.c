#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "test.h"

int main(){
    printf("Hello World\n");
    struct Books book1;
    strcpy(book1.author, "TestAuthor");
    book1.book_id = 0001;
    /*printf("%s\n", book1.author);*/
    printBook(book1);
    return 0;
}

void printBook(struct Books book){
    printf("Author is: %s\n", book.author);
}