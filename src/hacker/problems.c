//
// Created by EARN on 05-06-2017.
//

#include <stdio.h>
#include <stdlib.h>
#include "problems.h"
#include "../mylib/mylib.h"



//ATM Que Problem From HakerEarth

#define Max 1000000;

int atmQ(){
    int N;
    int count=1;
    int start;
    int Array[10000];
    scanf("%d",&N);
    array_get(Array,N);
    start = Array[0];
    for (int i = 0; i < N; i++) {
        if (start <= Array[i]){}
        else{count++;}
        start = Array[i];
    }
    return count;
}


//Mark the Answer
int markTheAns(){

    int N, X;
    int count = 0;
    int flag = 1;
    int final= 0;
    int* array = (int*) calloc(N, sizeof(int)); //allocating array dynamically
    scanf("%d %d",&N, &X);
    array_get(&array, N);

    for (int i = 0; i < N; i++) {
        if (array[i] < X || flag){
            if( array[i] > X)flag = 0;
            count++;
        }
    }
    return 0;
}