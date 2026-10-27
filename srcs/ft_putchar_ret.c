/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_ret.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 01:31:30 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 02:21:13 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_ret(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	ft_putchar_ret('A');
	ft_putchar_ret('0');
	ft_putchar_ret('\n');
	return 0;
}

/*
DESCRIPTION:
Print one character to standard output (file descriptor 1).

RETURN:
1 on success, -1 if write fails.

TODO:
Use write(1, &c, 1) and return its result.
*/