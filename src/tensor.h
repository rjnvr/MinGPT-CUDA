/* Memory & Tensor Utilities */
#include <stdbool.h>
#include <stdint.h>

#ifndef TENSOR_H
#define TENSOR_H


// 2D Tensor Structure
typedef struct {
    int rows;
    int cols;
    float *data;
} Tensor2D;

Tensor2D create_tensor(int rows, int cols);
void tensor_fill(Tensor2D *t, float value); // Fill every element with a value
void tensor_fill_random(Tensor2D *t, uint32_t seed); // Fill with random values using seed

void tensor_set_value(Tensor2D *t, int row, int col, float value);
float tensor_get_value(Tensor2D *t, int row, int col);

bool tensor_compare(Tensor2D *a, Tensor2D *b, float epsilon); // Compare two tensors with a tolerance

void print_tensor(Tensor2D t);
void free_tensor(Tensor2D *t);
#endif