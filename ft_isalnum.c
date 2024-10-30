/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:14:57 by ttran             #+#    #+#             */
/*   Updated: 2024/10/30 13:29:03 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "libft.h"



int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}

int main()
{
    char c;
    c = 3;
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));
    printf("\nResult CORRECT: %d", isalnum(c));

    c = '9';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalnum(c));
    printf("\nResult CORRECT: %d", isalnum(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalnum(c));
    printf("\nResult CORRECT: %d", isalnum(c));

    return 0;
}