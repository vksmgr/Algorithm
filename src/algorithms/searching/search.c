//
// Created by EARN on 05-06-2017.
//

#include <stdbool.h>
#include "search.h"


//linear search

int linearSerach(int* array, int len, int element){
    for (int i = 0; i < len; i++) {
        if(element == array[i]){
            return 1;
        }
    }
    return 0;
}