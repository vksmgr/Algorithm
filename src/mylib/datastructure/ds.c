//
// Created by EARN on 07-06-2017.
//

#include <stdlib.h>
#include <stdio.h>
#include "ds.h"
//#include "../mylib.h/"
//stack implementation.
//operations on stack
/*
 * first create an dynamic array and return the pointer to that array.
 * it take size of array and then perform operation on it.
 * * */

int* newStack( int size){
    int* pointer;
    pointer = (int* ) calloc(size, sizeof(int));
    return pointer;
}

//push function of stack.
int push(int* stack,int size ,int* top, int elem){
    if ( *top == size - 1){
        printf("Sorry stack is full");
        return 0;
    }else{
        *top = *top + 1;
        stack[*top] = elem;
    }
    return 1;
}

//pop function for stack. this function will remove the top most element  from the stack.
int pop(int* stack,int* top){
    //printf("%d", *top);
    if (top == -1){
        printf("Sorry the stack is Empty");
        return 0;
    }else{
        stack[*top] = 0;
        *top = *top - 1;
    }
    return 1;
}


