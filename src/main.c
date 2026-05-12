/* test */


#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"
#include <math.h>

int main() {
    // Create a 2D tensor
    Tensor2D t = create_tensor(3, 3);   

    // Fill the tensor with some values
    fill_tensor(&t, 1.0f);
    // Set specific values
    set_value(&t, 0, 0, 2.0f);
    set_value(&t, 1, 1, 3.0f);
    // Print the tensor
    printf("Tensor after filling and setting values:\n");
    print_tensor(t);

    //  Free the tensor memory
    free_tensor(&t);
    

    return 0;
}
