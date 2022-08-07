#include<stdio.h>
#include<string.h>
#include"sort.h"

int main(){

    int A[] = {9,4,3,2,1,8,2,4,9,6,3};
    int len = sizeof(A)/sizeof(A[0]);

    int B[len], C[len], D[len], E[len];
    memcpy(B, A, len*sizeof(int));
    memcpy(C, A, len*sizeof(int));
    memcpy(D, A, len*sizeof(int));
    memcpy(E, A, len*sizeof(int));

    printf("%d elements\n", len);
    printf("Original Array:\n");
    for(int i=0; i<len; i++){
        printf("  %d", B[i]);
    }

    printf("\n\nSelection Sort\n"); 
    selectionSort(A, len);
    for(int i=0; i<len; i++){
        printf("  %d", A[i]);
    }

    printf("\n\nBubble Sort\n");
    bubbleSort(B, len);
    for(int i=0; i<len; i++){
        printf("  %d", B[i]);
    }
    
    printf("\n\nInsertion Sort\n");
    insertionSort(C, len);
    for(int i=0; i<len; i++){
        printf("  %d", C[i]);
    }

    printf("\n\nMerge Sort\n");
    mergeSort(D, len);
    for(int i=0; i<len; i++){
        printf("  %d", D[i]);
    }

    printf("\n\nQuick Sort\n");
    quickSort(E, 0, len-1);
    for(int i=0; i<len; i++){
        printf("  %d", E[i]);
    }

}