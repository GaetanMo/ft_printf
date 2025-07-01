/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_ten.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorel <gmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:08:46 by gmorel            #+#    #+#             */
/*   Updated: 2024/11/19 14:53:14 by gmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_maj(unsigned int nb)
{
	char	*base;
	int		base_len;
	long	nbr;
	int		i;

	base = "0123456789ABCDEF";
	base_len = 16;
	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar_len('-');
		nbr = -nbr;
		i++;
	}
	if (nbr >= base_len)
		i = i + ft_hexa_maj(nbr / base_len);
	i++;
	ft_putchar_len(base[nbr % base_len]);
	return (i);
}

int	ft_printlonghex(unsigned long long n)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar_len(hex[n]);
		count++;
	}
	else
	{
		count += ft_printlonghex(n / 16);
		ft_putchar_len(hex[n % 16]);
		count++;
	}
	return (count);
}

int	ft_plx(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (ft_putstr_len("(nil)"));
	count += ft_putstr_len("0x");
	return (count + ft_printlonghex(n));
}
