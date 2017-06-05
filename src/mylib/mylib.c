//
// Created by EARN on 05-06-2017.
//

#include <stdio.h>
#include "mylib.h"

void array_print(int* arry, int len){
    for (int i = 0; i < len; i++) {
        printf("%d ",arry[i]);
    }
}

void array_get(int* array, int len){
    for (int i = 0; i < len; i++) {
        scanf("%d",&array[i]);
    }
}
