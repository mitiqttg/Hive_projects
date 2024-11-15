
#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size) {
    size_t total_size;
    size_t i;
    void *ptr;
    unsigned char *byte_ptr;
    
    i = 0;
    total_size = num_elements * element_size;
    ptr = malloc(total_size);
    byte_ptr = (unsigned char *)ptr;
    if (ptr == NULL)
        return (NULL);

    while (i < total_size) {
        byte_ptr[i] = 0;
        i++;
    }

    return (ptr);
}