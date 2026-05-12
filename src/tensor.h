/* Memory & Tensor Utilities */

#ifndef TENSOR_H
#define TENSOR_H


// 2D Tensor Structure
typedef struct {
    int rows;
    int cols;
    float *data;
} Tensor2D;

Tensor2D create_tensor(int rows, int cols);
void fill_tensor(Tensor2D *t, float value);
void free_tensor(Tensor2D *t);
void print_tensor(Tensor2D t);
void set_value(Tensor2D *t, int row, int col, float value);
float get_value(Tensor2D *t, int row, int col);
#endif