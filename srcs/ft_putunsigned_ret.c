/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_ret.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:15:30 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:28:34 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned_ret(unsigned int n)
{
    
}

int main(void)
{
	ft_putunsigned_ret(42);
	ft_putunsigned_ret(0);
	ft_putunsigned_ret(4294967295U);
	return 0;
}

/*
DESCRIPTION:
Print an unsigned decimal integer (%%u).

RETURN:
Number of characters written, or -1 on write error.

TODO:
Print each base-10 digit in order. Handle 0 and UINT_MAX.
You can use recursion, or a small local character buffer.
*/