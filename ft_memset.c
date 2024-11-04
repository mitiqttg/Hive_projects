/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:51:44 by ttran             #+#    #+#             */
/*   Updated: 2024/11/04 15:50:21 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t				i;

	i = 0;
	ptr = s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}

int main() {
    char buffer1[] = "abcdefgfg";
    char buffer2[] = "abcdefgfg";

    ft_memset(buffer1, '-', 3);
    memset(buffer2, '-', 3);

    for (size_t i = 0; i < sizeof(buffer1); i++) {
        printf("%c ", buffer1[i]);
    }
    printf("\n");
    printf("\nThis is the size of dest:%lu", sizeof(buffer1));
    printf("\nThe CORRECT ONE:\n");
    for (size_t i = 0; i < sizeof(buffer2); i++) {
        printf("%c ", buffer2[i]);
    }
    printf("\nThis is the size of dest:%lu", sizeof(buffer2));
    printf("\n");

    return 0;
}