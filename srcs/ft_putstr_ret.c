/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 01:26:22 by breheg            #+#    #+#             */
/*   Updated: 2026/11/17 13:54:33 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr_ret(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		if (write(1, &str[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	count;

// 	count = ft_putstr_ret("Hello");
// 	printf("\nreturn: %d\n\n", count);

// 	count = ft_putstr_ret("");
// 	printf("\nreturn: %d\n\n", count);

// 	count = ft_putstr_ret("42");
// 	printf("\nreturn: %d\n\n", count);

// 	count = ft_putstr_ret(NULL);
// 	printf("\nreturn: %d\n\n", count);

// 	return 0;
// }

/*
DESCRIPTION:
Print a NUL-terminated string to standard output.
If str is NULL, print "(null)".

RETURN:
Number of bytes written, or -1 on write error.
*/