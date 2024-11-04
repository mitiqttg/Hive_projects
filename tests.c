/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:47 by ttran             #+#    #+#             */
/*   Updated: 2024/11/04 17:22:49 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

// ISALPHA TEST
// int main()
// {
//     // return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
//     char c;
//     c = 'a';
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

//     c = 'z';
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

//     c='(';
//     printf("\nResult when non-alphabetic character is passed: %d\n", ft_isalpha(c));

//     return 0;
// }

// ISDIGIT TEST
// int main()
// {
//     char c;
//     c = 3;
//     printf("\nResult when uppercase alphabet is passed: %d", isdigit(c));

//     c = '9';
//     printf("\nResult when lowercase alphabet is passed: %d", isdigit(c));

//     c='+';
//     printf("\nResult when non-alphabetic character is passed: %d", isdigit(c));

//     return 0;
// }

// ISALNUM TEST
// int main()
// {
//     char c;
//     c = 3;
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));
//     printf("\nResult CORRECT: %d", isalnum(c));

//     c = '9';
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalnum(c));
//     printf("\nResult CORRECT: %d", isalnum(c));

//     c='+';
//     printf("\nResult when non-alphabetic character is passed: %d", ft_isalnum(c));
//     printf("\nResult CORRECT: %d", isalnum(c));

//     return 0;
// }

// STRLEN TEST
// put this line after the while loop
// printf("This is the return %d\n", c);
// int main(void)
// {
//     char message[] = "123456789";
//     ft_strlen(message);
//     return 0;
// }


// FT_ISPRINT TEST
// int main()
// {
//     char c;

//     c = '\b';
//     printf("Result when a printable character %c is passed to isprint(): %d\n", c, ft_isprint(c));
//     printf("Result CORRECT %c is passed to isprint(): %d\n", c, isprint(c));

//     c = '\n';
//     printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));

//     return 0;
// }


// FT_STRLCAT TEST
// int main(void)
// {
//     char *dest[4] = "fgegfg";
//     char *src = "haha";
//     unsigned int size = 3;

//     printf("This is the return: %u\n", ft_strlcat(dest, src, size));
//     printf("This is CORRECT: %lu\n", strlcat(dest, src, size));

//     return (1);
// }


// FT_TOUPPER TEST 
// int main(void)
// {
//     int c = '\t';
//     printf("This is the return: %d\n", ft_toupper(c));
//     printf("This is CORRECT: %d\n", toupper(c));
 
//     c = 'a';
//     printf("This is the return: %d\n", ft_toupper(c));
//     printf("This is CORRECT: %d\n", toupper(c));
//     return (1);
// }

// FT_TOLOWER TEST 
// int main(void)
// {
//     int c = '\t';
//     printf("This is the return: %d\n", ft_tolower(c));
//     printf("This is CORRECT: %d\n", tolower(c));
 
//     c = 'a';
//     printf("This is the return: %d\n", ft_tolower(c));
//     printf("This is CORRECT: %d\n", tolower(c));
//     return (1);
// }

// FT_MEMSET TEST 

// int main() {
//     char buffer1[] = "ghghghghghghghghghghgh";
//     char buffer2[] = "ghghghghghghghghghghgh";

//     ft_memset(buffer1, '-', 5);
//     memset(buffer2, '-', 5);

//     for (int i = 0; i < sizeof(buffer1); i++) {
//         printf("%c ", buffer1[i]);
//     }
//     printf("\n");
//     printf("The CORRECT ONE:\n");
//     for (int i = 0; i < sizeof(buffer2); i++) {
//         printf("%c ", buffer2[i]);
//     }
//     printf("\n");

//     return 0;
// }

// FT_MEMCPY TEST 

// int main() {
//     char buffer1[] = "tientran";
//     char buffer2[] = "oo";
    
//     char b1[] = "tientran";
//     char b2[] = "oo";

//     ft_memcpy(buffer1, buffer2, 4);
//     memcpy(b1, b2, 4);

//     for (size_t i = 0; i < sizeof(buffer1); i++) {
//         printf("%c", buffer1[i]);
//     }
//     printf("\nThis is the size of dest:%lu", sizeof(buffer1));
//     printf("\n");
//     printf("The CORRECT ONE:\n");
//     for (size_t i = 0; i < sizeof(b1); i++) {
//         printf("%c", b1[i]);
//     }
//     printf("\nThis is the size of dest:%lu", sizeof(buffer1));
//     printf("\n");

//     return 0;
// }

// FT_MEMCHR TEST 

// int main()
// {
//     char s1[] = "tientran";
//     char c1 = 'r';
    
//     // char s2[] = "tientran";
//     // char c2 = 'r';


//     void *res1 = ft_memchr(s1, c1, 10);
//     void *res2 = memchr(s1, c1, 10);

//     for (size_t i = 0; i < sizeof(s1); i++) {
//         printf("%c", s1[i]);
//     }
//     printf("\n");
//     printf("This is my result   = %p\n", res1);
//     printf("\nThis is the size of dest:%lu", sizeof(s1));
//     printf("\n");
//     printf("The CORRECT ONE:\n");
//     for (size_t i = 0; i < sizeof(s1); i++) {
//         printf("%c", s1[i]);
//     }
//     printf("\n");
//     printf("This is the correct result   = %p\n", res2);
//     printf("\nThis is the size of dest:%lu", sizeof(s1));
//     printf("\n");

//     return 0;
// }