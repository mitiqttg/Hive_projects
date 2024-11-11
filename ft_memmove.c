/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:48 by ttran             #+#    #+#             */
/*   Updated: 2024/11/09 20:00:02 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				i;
	char				*dest;
	const char			*src;

	i = 0;
	dest = (char *)s1;
	src = (const char *)s2;
	if (dest <= src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
	return (dest);
}
