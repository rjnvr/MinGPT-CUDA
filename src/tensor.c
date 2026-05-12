/* Memory & Tensor Utilities */

#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"

Tensor2D create_tensor(int rows, int cols) {
    Tensor2D t;

    t.rows = rows;
    t.cols = cols;
    t.data = malloc(rows * cols * sizeof(float));

    return t;
}

void fill_tensor(Tensor2D *t, float value) {
    for (int i = 0; i < t->rows * t->cols; i++) {
        t->data[i] = value;
    }
}

void set_value(Tensor2D *t, int row, int col, float value) {
    if (row >= 0 && row < t->rows && col >= 0 && col < t->cols) {
        t->data[row * t->cols + col] = value;
    }
}

float get_value(Tensor2D *t, int row, int col) {
    if (row >= 0 && row < t->rows && col >= 0 && col < t->cols) {
        return t->data[row * t->cols + col];
    }
    return 0.0f; // Return 0 for out-of-bounds access
}


void free_tensor(Tensor2D *t) {
    free(t->data);
    t->data = NULL;
    t->rows = 0;
    t->cols = 0;
}

void print_tensor(Tensor2D t) {
    for (int r = 0; r < t.rows; r++) {
        for (int c = 0; c < t.cols; c++) {
            printf("%f ", get_value(&t, r, c));
        }
        printf("\n");
    }
}