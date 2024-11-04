/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:51:27 by ttran             #+#    #+#             */
/*   Updated: 2024/11/04 16:04:13 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    char *d;
    const char *s;
    size_t i;

    d = dest;
    i = (size_t)0;
    s = (const char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return (dest);
}