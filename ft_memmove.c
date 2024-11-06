/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:48 by ttran             #+#    #+#             */
/*   Updated: 2024/11/06 19:12:31 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t							i;
	size_t							j;
	size_t							k;
	unsigned char				*dest;
	const unsigned char					*src;

	i = 0;
	j = n;
	k = 0;
	dest = (unsigned char *)s1;
	src = (const unsigned char *)s2;

	if (dest == src || n == 0)
        return s1;

    if (dest < src)
	{
        while (i < n && dest[i] != '\0' && src[i] != '\0')
		{
            dest[i] = src[i];
			i++;
		}
		if (i <= n)
		{
			while (k < n)
			{
				dest[i] = src[k];
			    // printf("dest char = %x\n", dest[i]);
				i++;
				k++; 
			}
			dest[i] = '\0';
		}
    } else {
        while (j > 0)
		{
            dest[j - 1] = src[j - 1];
			j--;
        }
    }

    return s1;
}

// void *ft_memmove(void *s1, const void *s2, size_t n) {
//     size_t              i = 0;
//     unsigned char       *dest = (unsigned char *)s1;
//     const unsigned char *src = (const unsigned char *)s2;

//     if (dest < src) {
//         while (i < n) {
//             dest[i] = src[i];
//             i++;
//         }
//     } else if (dest > src) {
//         while (n > 0) {
//             n--;
//             dest[n] = src[n];
//         }
//     }
//     return s1;
// }