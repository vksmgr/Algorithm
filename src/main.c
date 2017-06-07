#include <stdio.h>
#include <stdlib.h>

#include "./mylib/mylib.h"
#include "../src/hacker/problems.h"
#include "mylib/datastructure/ds.h"


int main() {
    int *pointer;
    int top = -1;
    pointer = newStack(10);
    //array_get(pointer,10);
    array_print(pointer,10);

    push(pointer, 10, &top, 12);
    printf("\n%d", top);

    push(pointer, 10, &top, 13);
    printf("\n%d", top);

    push(pointer, 10, &top, 14);
    printf("\n%d\n", top);

    pop(pointer,&top);
    array_print(pointer,10);
    free(pointer);
    return 0;
}

