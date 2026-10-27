/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:14:36 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:32:06 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr_ret(void *ptr)
{
    
}

int main(void)
{
	int	n;
	
	n = 42;
	ft_putptr_ret(&n);
	ft_putptr_ret(NULL);
	return 0;
}


/*
DESCRIPTION:
Print a pointer address (%%p), typically as 0x followed by lowercase hex.

RETURN:
Number of characters written, or -1 on write error.

TODO:
1. Check your project's required representation for NULL pointers.
2. Print the prefix and hexadecimal digits of the address.
3. Use unsigned long or uintptr_t (if allowed) to hold the address;
   unsigned int may truncate pointers on 64-bit systems.
4. Add up all characters written, including the prefix.
*/