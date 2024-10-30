/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:47 by ttran             #+#    #+#             */
/*   Updated: 2024/10/30 10:55:20 by ttran            ###   ########.fr       */
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
//     printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));

//     c = '9';
//     printf("\nResult when lowercase alphabet is passed: %d", isalnum(c));

//     c='+';
//     printf("\nResult when non-alphabetic character is passed: %d", isalnum(c));

//     return 0;
// }

// STRLEN TEST
// put this line after the while loop
// printf("This is the return %d\n", c);
// #include <stdio.h>
// #include <ctype.h>
// #include <unistd.h>
// int main(void)
// {
//     char message[] = "123456789";
//     ft_strlen(message);
//     return 0;
// }


// ISPRINT TEST
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