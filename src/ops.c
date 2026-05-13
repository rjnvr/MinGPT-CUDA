/* Math Operations */
#include "ops.h"
#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"

void matmul(float *A, float *B, float *C, int M, int K, int N) {
    //initialize C to zero
    for (int i = 0; i < M * N; i++) {
        C[i] = 0.0f;
    }
    

    for (int i = 0; i < M; i++) { // For each row of A
        for (int k = 0; k < K; k++) { // For each column of A / row of B
            float a = A[i * K + k]; // Get the value from A

            for (int j = 0; j < N; j++) { // For each column of B
                C[i * N + j] += a * B[k * N + j]; // Accumulate the product into C
            }
        }
    }
}