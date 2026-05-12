/* test */


#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"
#include <math.h>

int main() {
    // Create 2 tensors and perform some operations
    Tensor2D t1 = create_tensor(2, 3);
    Tensor2D t2 = create_tensor(2, 3);

    // Fill the tensors with some values
    tensor_fill(&t1, 1.0f);
    tensor_fill_random(&t2, 1.0f);

    // Print the tensors
    printf("Tensor 1:\n");
    print_tensor(t1);
    printf("Tensor 2:\n");
    print_tensor(t2);

    // compare the tensors
    if (tensor_compare(&t1, &t2, 0.0001f)) {
        printf("Tensors are approximately equal.\n");
    } else {
        printf("Tensors are NOT equal.\n");
    }



    //  Free the tensor memory
    free_tensor(&t1);
    free_tensor(&t2);


    return 0;
}
