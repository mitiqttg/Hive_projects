/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:47 by ttran             #+#    #+#             */
/*   Updated: 2024/11/11 12:37:38 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// -------------------------------ISALPHA TEST
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

// -------------------------------ISDIGIT TEST
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

// -------------------------------ISALNUM TEST
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

// --------------------------------STRLEN TEST
// put this line after the while loop
// printf("This is the return %d\n", c);
// int main(void)
// {
//     char message[] = "123456789";
//     ft_strlen(message);
//     return 0;
// }


// --------------------------------FT_ISPRINT TEST
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


// --------------------------------FT_STRCHR TEST
// int main() {
//     const char *str = "Hello, World!";
//     char c = 'e';

//     char *result = ft_strchr(str, c);
//     char *result1 = ft_strchr(str, c);
//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", c, result - str);
//         printf("CORRECT '%c' found at position: %ld\n", c, result1 - str);
//     } else {
//         printf("Character '%c' not found.\n", c);
//     }

//     return 0;
// }

// --------------------------------FT_STRRCHR TEST
// int main() {
//     const char *str = "Hello, WorldW!";
//     char c = 'y';

//     char *result = ft_strrchr(str, c);
//     char *result1 = strrchr(str, c);
//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", c, result - str);
//         printf("CORRECT '%c' found at position: %ld\n", c, result1 - str);
//     } else {
//         printf("Character '%c' not found.\n", c);
//     }

//     return 0;
// }


// --------------------------------FT_STRNSTR TEST
// int main() {
//     const char *haystack = "Hello, World!";
//     const char *needle = "rl";
//     size_t len = 10;

//     char *result = ft_strnstr(haystack, needle, len);
//     //char *result1 = strnstr(haystack, needle, len);
//     if (result != NULL) {
//         printf("Substring '%s' found at position: %ld\n", needle, result - haystack);
//         printf("Substring '%s' found at position: %ld\n", needle, result1 - haystack);
//     } else {
//         printf("Substring '%s' not found within the first %zu characters.\n", needle, len);
//     }

//     return 0;
// }

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	const char *str;
// 	int			arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "", 10)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 6)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 7)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 8)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 9)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 10)
// 	{
// 		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	return (0);
// }



// --------------------------------FT_STRLCAT TEST
// int main(void)
// {
//     char *dest[4] = "fgegfg";
//     char *src = "haha";
//     unsigned int size = 3;

//     printf("This is the return: %u\n", ft_strlcat(dest, src, size));
//     printf("This is CORRECT: %lu\n", strlcat(dest, src, size));

//     return (1);
// }


// --------------------------------FT_TOUPPER TEST 
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

// ---------------------------------FT_TOLOWER TEST 
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

// ---------------------------------FT_MEMSET TEST 

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

// ---------------------------------FT_MEMCPY TEST 

// int main()
// {
//     char buffer1[] = "tientran";
//     char buffer2[] = "oo";
    
//     char b1[] = "tientran";
//     char b2[] = "oo";

//     ft_memcpy(buffer1, buffer2, 7);
//     memcpy(b1, b2, 7);

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


// ----------------------------------FT_MEMCHR TEST 

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



// ---------------------------------FT_MEMMOVE TEST 
// int main()
// {
//     char dest_str[9] = "old stuf";
//     const char src_str[]  = "make it dude";

//     char dest[9] = "old stuf";
//     const char src[]  = "make it dude";

//     ft_memmove(dest_str, src_str, 2);
//     memmove(dest, src, 2);

//     printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
//     printf("After CORRECT dest = %s, src = %s\n", dest, src);
//     return 0;
// }
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	int		arg;

// 	dest = src + 1;
// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (dest != ft_memmove(dest, "consectetur", 5))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (dest != ft_memmove(dest, src, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (src != ft_memmove(src, dest, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (src != ft_memmove(src, dest, 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	return (0);
// }

// --------------------------------FT_MEMCMP TEST 
// int main() 
// {
//    char str1[18];
//    char str2[18];
//    int ret;
//    int ret1;

//    memcpy(str1, "t\200", 3);
//    memcpy(str2, "\0", 3);

//    ret = ft_memcmp(str1, str2, 6);
//    ret1 = memcmp(str1, str2, 6);
//    printf("The return of ft_memcmp is: %d\n", ret);
//    printf("The CORRECT return memcmp is: %d\n", ret1);

//    return(0);
// }


// --------------------------------FT_BZERO TEST 
// int main() {
//     char buffer[] = "Hello THERE";
//     char buffer1[] = "Hello THERE";

//     printf("Before my_bzero: %s\n", buffer);
//     printf("Before my_bzero1: %s\n", buffer1);
//     my_bzero(buffer, 2);
//     bzero(buffer1, 2);

//     printf("After my_bzero: ");
//     for (int i = 0; i < 6; i++) {
//         printf("%d ", buffer[i]);
//     }
//     printf("\n");

//     printf("CORRECT bzero: ");
//     for (int i = 0; i < 6; i++) {
//         printf("%d ", buffer1[i]);
//     }
//     printf("\n");

//     return 0;
// }

// ---------------------------- FT_CALLOC TEST 
// int main() {
//     int *arr = (int *)my_calloc(5, sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     free(arr);
    
//     int *arr1 = (int *)calloc(5, sizeof(int));
//     if (arr1 == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("Correct arr1[%d] = %d\n", i, arr1[i]);
//     }

//     free(arr1);

//     return 0;
// }