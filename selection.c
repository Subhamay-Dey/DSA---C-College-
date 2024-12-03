#include<stdio.h>

void printArray(int *A, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

void selectionArray(int *A, int n) {
    printf("Selection Sorting in process. \n");
    int indexOfMin;
    int temp;
    for(int i = 0; i < n; i++) {
        indexOfMin = i;
        for(int j = i + 1; j < n; j++) {
            if(A[j] < A[indexOfMin]) {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main() {
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionArray(A, n);
    printArray(A, n);
}