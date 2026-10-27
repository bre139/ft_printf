/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:14:13 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:14:21 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_ret(int n)
{
    
}


/*
DESCRIPTION:
Print a signed decimal integer (%%d / %%i).

RETURN:
Number of characters written, or -1 on write error.

TODO:
1. Handle negative numbers, including INT_MIN (-2147483648 on 32-bit int).
2. Print digits in the correct order.
3. Count the minus sign and every digit.
TIP: Convert n to long before negating it, or use unsigned arithmetic.
TIP: A static helper may make recursion and error handling easier.
*/