//
// Created by EARN on 10-05-2017.

#include <stdio.h>
#include "sorting.h"



//insertion sort
//in place sorting algorithm
//best for small input

int *ins_srt(int *array, int len) {
    for (int i = 0; i < len; i++) {
        int temp = array[i];
        int j = i;
        while ( j > 0 && temp < array[j-1]){
            array[j] = array[j - 1];
            j = j - 1;
        }
        array[j] = temp;
    }
    return array;
}