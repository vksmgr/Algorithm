#include <stdio.h>
#include "sorting/sorting.h"


int main() {
    int len;
    int arr[10];
    int *ptr;
    printf("Enter The Length and array Element");
    scanf("%d",&len);
    for (int i = 0; i < len; i++) scanf("%d",&arr[i]);
    ptr = ins_srt(arr,len);
    for (int i = 0; i < len; i++) printf("%d",ptr[i]);
    return 0;
}