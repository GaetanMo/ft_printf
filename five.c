/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorel <gmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:51:20 by gmorel            #+#    #+#             */
/*   Updated: 2024/11/08 07:06:37 by gmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr_len("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_len(int nb)
{
	long	nbr;
	int		i;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar_len('-');
		nbr = -nbr;
		i++;
	}
	if (nbr >= 10)
		i = i + ft_putnbr_len(nbr / 10);
	i++;
	ft_putchar_len(nbr % 10 + 48);
	return (i);
}

int	ft_putnbr_uns_len(unsigned int nb)
{
	long	nbr;
	int		i;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar_len('-');
		nbr = -nbr;
		i++;
	}
	if (nbr >= 10)
		i = i + ft_putnbr_uns_len(nbr / 10);
	i++;
	ft_putchar_len(nbr % 10 + 48);
	return (i);
}

int	ft_hexa_min(unsigned int nb)
{
	char	*base;
	int		base_len;
	long	nbr;
	int		i;

	base = "0123456789abcdef";
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
		i = i + ft_hexa_min(nbr / base_len);
	i++;
	ft_putchar_len(base[nbr % base_len]);
	return (i);
}
