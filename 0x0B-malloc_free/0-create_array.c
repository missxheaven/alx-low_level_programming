#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

int main() {
    unsigned int size = 5;
    char initial_char = 'A';

    char *result_array = create_array(size, initial_char);

    if (result_array != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result_array[i]);
        }
        free(result_array);
    } else {
        printf("Failed to create array.");
    }

    return 0;
}
