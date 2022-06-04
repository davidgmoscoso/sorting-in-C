#include<stdio.h>
#include"sort.h"

int main(){
    int A[] = {4,3,5,9,1};

    ALGO(A,5);

    for(int i=0; i<5; i++)
        printf("\t%d", A[i]);
}