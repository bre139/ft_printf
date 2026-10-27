/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_ret.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:15:30 by breheg            #+#    #+#             */
/*   Updated: 2026/10/27 05:39:36 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_num_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_putunsigned_ret(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_length += ft_printstr(num);
		free(num);
	}
	return (print_length);
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