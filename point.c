#include <stdio.h>

int main(void);

int main(void) {
    /* regular int varliable with initial value */
    int value = 0x1000;
    /* int pointer variable, pointing to value */
    int *pointer = &value;

    printf("value: 0x%x at address %p\n", value, &value);
    printf("pointer: %p at address %p\n", pointer, &pointer);
    printf("*pointer: 0x%x at address %p\n", *pointer, pointer);

    return 0;
}
