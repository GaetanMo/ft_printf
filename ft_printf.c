/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorel <gmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:44:18 by gmorel            #+#    #+#             */
/*   Updated: 2024/11/25 17:18:38 by gmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	possibilities(const char *str, va_list ap)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count = ft_putchar_len(va_arg(ap, int));
	if (*str == 's')
		count = ft_putstr_len(va_arg(ap, char *));
	if (*str == 'p')
		count = ft_plx(va_arg(ap, unsigned long long));
	if (*str == 'd' || *str == 'i')
		count = ft_putnbr_len(va_arg(ap, int));
	if (*str == 'u')
		count = ft_putnbr_uns_len(va_arg(ap, unsigned int));
	if (*str == 'x')
		count = ft_hexa_min(va_arg(ap, int));
	if (*str == 'X')
		count = ft_hexa_maj(va_arg(ap, int));
	if (*str == '%')
		count = ft_putchar_len('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	if (!str)
		return (-1);
	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_len(*str);
			count ++;
			str++;
		}
		else
		{
			str++;
			count = count + possibilities(str, ap);
			str++;
		}
	}
	va_end(ap);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;
	int	my;
	int	ofi;

	c = 55555;
	my = ft_printf("%p", &c);
	ofi = printf("%p", &c);
	ft_printf("\nmy : %d\n", my);
	ft_printf("Official : %d\n", ofi);
	return (0);
}*/
