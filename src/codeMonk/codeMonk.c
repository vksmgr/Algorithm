//
// Created by EARN on 11-06-2017.
//

#include <stdio.h>
#include <string.h>


#include "codeMonk.h"


void mainFunction(){
    monk_and_rotations();
}


//Monk Teaches Palindrome
//using string.h functions

int mTp(){
    int testCases;
    scanf("%d",&testCases);
    while(testCases--){
        isPalandrome(testCases);
    }
}

void isPalandrome(int cases){

    char string[100000];
    char revstring[100000];
    int len;
    int palendraome = -1;
    scanf("%s",&string);
    len = strlen(string);
    int lencopy = len;
    memset(revstring,0,100000);
    for (int i = 0; i < len; i++) {
        revstring[i] = string[lencopy-1];
        lencopy = lencopy - 1;
    }
    //debug

    palendraome = strcmp(string, revstring );


    if (palendraome == 0){
        if (len % 2 == 0){
            printf("YES EVEN\n");
        } else{
            printf("YES ODD\n");
        }
    } else{
        printf("NO\n");
    }
}


/*Little Monk and Good String:
 *
 *
 * */

void goodString(){
    char string[100000];
    int len, i;
    int max = 1;
    int next = 1;
    scanf("%s", &string);
    len = strlen(string);

    for (int j = 0; j < len-1; j++) {
        if (string[j] == 'a' || string[j] == 'e' ||string[j] == 'i' ||string[j] == 'o' ||string[j] == 'u'){
            max++;
            next = max;
            if(!(string[j+1] == 'a' || string[j+1] == 'e' ||string[j+1] == 'i' ||string[j+1] == 'o' ||string[j+1] == 'u')){
                max = 0;
            }
        }
    }

    printf("%d\n", next);
}


/*
 * Monk and Rotation
 *
 * */

void monk_and_rotations(){
    int T ;
    scanf("%d",&T);
    //printf("%d",T);
    while(T--){
        rotate(T);
    }

}

int rotate(int test){
    int N, K, i, j;
    int array[100000];
    int newArray[100000];

    scanf("%d %d", &N, &K);
    for ( i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    for ( j = 0; j < N; j++) {
        int cal = (j + K)% N ;
        newArray[cal] = array[j];
    }

    for ( i = 0; i < N; i++) {
        printf("%d ", newArray[i]);
    }

}