#include <stdio.h>

#include "./sorting/mylib/mylib.h"


int main() {

    printf("\nPleaseee Enter Array: ");

    int len;
    int array[100];
    printf("\nPleaseee Enter length: ");
    scanf("%d",&len);

    array_get(array,len);

    array_print(array, len);
    return 0;
}

