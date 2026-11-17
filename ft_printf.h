/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:55:50 by breheg            #+#    #+#             */
/*   Updated: 2026/11/17 13:55:53 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
int	ft_format(char c, va_list *args);
int	ft_putchar_ret(char c);
int	ft_putstr_ret(char *str);
int	ft_putnbr_ret(int n);
int	ft_putunsigned_ret(unsigned int n);
int	ft_puthex_ret(unsigned int n, char format);
int	ft_putptr_ret(void *ptr);

#endif