/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:07 by ttran             #+#    #+#             */
/*   Updated: 2024/11/04 17:22:28 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t							i;
	const unsigned char				*str;
	unsigned char					value;

	i = 0;
	str = (const unsigned char *)s;
	value = (unsigned char)c;
	while ((i < n + 1) && (str[i] != '\0'))
	{
		if (str[i] == value)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
