/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorel <gmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:32:29 by gmorel            #+#    #+#             */
/*   Updated: 2024/11/19 14:41:45 by gmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int nb);
int	ft_putnbr_uns_len(unsigned int nb);
int	ft_hexa_min(unsigned int nb);
int	ft_hexa_maj(unsigned int nb);
int	ft_plx(unsigned long long n);
int	ft_printlonghex(unsigned long long n);

#endif
