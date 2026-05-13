/* test */


#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"
#include <math.h>
#include "ops.h"


int main() {
    // Create 2 tensors and perform some operations
    Tensor2D t1 = create_tensor(2, 3);
    Tensor2D t2 = create_tensor(3, 2);
    

    // Fill the tensors with some values
    tensor_fill_random(&t1, 1.0f);
    tensor_fill_random(&t2, 1.0f);

    // Print the tensors
    printf("Tensor 1:\n");
    print_tensor(t1);
    printf("Tensor 2:\n");
    print_tensor(t2);

    // Perform matrix multiplication
    Tensor2D t3 = create_tensor(t1.rows, t2.cols);
    matmul(t1.data, t2.data, t3.data, t1.rows, t1.cols, t2.cols);

    // Print the result
    printf("Result of t1 x t2:\n");
    print_tensor(t3);  


    //  Free the tensor memory
    free_tensor(&t1);
    free_tensor(&t2);


    return 0;
}
