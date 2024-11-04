/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:56:09 by ttran             #+#    #+#             */
/*   Updated: 2024/10/30 13:28:05 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (ft_isalpha(c) && c > 61 && c < 91)
        return (c + 32);
    return (c);
}

int main(void)
{
    int c = 't';
    printf("This is the return: %d\n", ft_tolower(c));
    printf("This is CORRECT: %d\n", tolower(c));
 
    c = '~';
    printf("This is the return: %d\n", ft_tolower(c));
    printf("This is CORRECT: %d\n", tolower(c));
    return (1);
}