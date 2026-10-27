/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:13:44 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:30:43 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_puthex_ret(unsigned int n, char format)
{
    
}

int main(void)
{
	ft_puthex_ret(255, 'x');
	ft_puthex_ret(255, 'X');
	ft_puthex_ret(0, 'x');
	return 0;
}


/*
DESCRIPTION:
Print an unsigned integer in hexadecimal.
format == 'x' -> 0123456789abcdef
format == 'X' -> 0123456789ABCDEF

RETURN:
Number of characters written, or -1 on write error.

TODO:
1. Choose the alphabet based on format.
2. Convert n to base 16, including zero.
3. Return the number of printed characters.
*/