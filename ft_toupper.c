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

#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int ft_toupper(int c)
{
    if (ft_isalpha(c))
        return (c - 32);
    return (1);
}

int main(void)
{
    int c = '}';
    printf("This is the return: %d\n", toupper(c));
 
    c = 'z';
    printf("This is the return: %d\n", toupper(c));
    return (1);
}