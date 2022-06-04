#include<stdio.h>
#include"sort.h"

int main(){
    int A[] = {9,4,3,2,1,8,2,4,9,6,3};
    int len = sizeof(A)/sizeof(A[0]);

    printf("%d elements\n", len);

    ALGO(A,len);

    for(int i=0; i<len; i++)
        printf("\t%d", A[i]);
}