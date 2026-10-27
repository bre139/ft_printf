/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 01:26:22 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:25:58 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_ret(char *str)
{
	int		i;
	
	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		i++;
	return (write(1, str, i));
}

int main(void)
{
	ft_putstr_ret("Hello\n");
	ft_putstr_ret("");
	ft_putstr_ret("42\n");
	ft_putstr_ret(NULL);
	return 0;
}


/*
DESCRIPTION:
Print a NUL-terminated string to standard output.
If str is NULL, print "(null)".

RETURN:
Number of bytes written, or -1 on write error.

TODO:
1. Replace NULL with "(null)".
2. Find the string length using a while loop.
3. Write the string and return the result.
NOTE: A single write can be short; for full robustness, retry remaining bytes.
*/