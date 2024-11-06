/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:48 by ttran             #+#    #+#             */
/*   Updated: 2024/11/04 15:48:56 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *s1, const void *s2, size_t n);
{
	size_t							i;
	const unsigned char				*dest;
	unsigned char					value;

	i = 0;
	dest = (const unsigned char *)s;
	value = (unsigned char)c;
	while ((i < n + 1) && (dest[i] != '\0') && (value[i] != '\0'))
	{
		if (dest[i] == value)
			return ((void *)(dest + i));
		i++;
	}
	return (NULL);
}
