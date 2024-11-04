
#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *ptr;
    unsigned char value;
    int i;

    i = 0;
    ptr = s;
    value = (unsigned char)c;
    while (i < n) {
        ptr[i] = value;
        i++;
    }

    return s;
}

int main() {
    char buffer1[] = "ghghghghghghghghghghgh";
    char buffer2[] = "ghghghghghghghghghghgh";

    ft_memset(buffer1, '-', 5);
    memset(buffer2, '-', 5);

    for (int i = 0; i < sizeof(buffer1); i++) {
        printf("%c ", buffer1[i]);
    }
    printf("\n");
    printf("The CORRECT ONE:\n");
    for (int i = 0; i < sizeof(buffer2); i++) {
        printf("%c ", buffer2[i]);
    }
    printf("\n");

    return 0;
}