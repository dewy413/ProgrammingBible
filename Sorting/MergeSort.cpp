#include <cmath>
using namespace std;

void merge(int B[], int bSize, int C[], int cSize, int A[]) {
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < bSize && j < cSize) {
        if(B[i] <= C[j]) {
            A[k] = B[i];
            i++;
        } else {
            A[k] = C[j];
            j++;
        }
        k++;
    }
    if(i == bSize) {
        for(j = j; j < cSize; j++) {
            A[k++] = C[j];
        }
    } else {
        for (i = i; i < bSize; i++) {
            A[k++] = B[i];
        }
    }
}

void mergeSort(int A[], double size) {
    if(size > 1) {
        int B[int(floor(size / 2))];
        int C[int(ceil(size / 2))];
        for(int i = 0; i < int(floor(size / 2)); i++) {
            B[i] = A[i];
        }
        for(int i = int(floor(size / 2)); i < size; i++) {
            C[i - int(floor(size / 2))] = A[i];
        }
        mergeSort(B, floor(size / 2));
        mergeSort(C, ceil(size / 2));
        merge(B, floor(size / 2), C, ceil(size / 2), A);
    }
}
