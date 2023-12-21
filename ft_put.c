/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:28:37 by klakbuic          #+#    #+#             */
/*   Updated: 2023/12/20 09:37:22 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
		ft_putchar(str[i++], count);
}

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar((n % 10) + '0', count);
		return ;
	}
	ft_putnbr(n / 10, count);
	ft_putchar((n % 10) + '0', count);
}

void	ft_putunbr(unsigned int n, int *count)
{
	if (n < 10)
	{
		ft_putchar((n % 10) + '0', count);
		return ;
	}
	ft_putunbr(n / 10, count);
	ft_putchar((n % 10) + '0', count);
}

void	ft_putxnbr(unsigned int n, int *count, char *hex_table)
{
	if (n < 16)
	{
		ft_putchar(hex_table[(n % 16)], count);
		return ;
	}
	ft_putxnbr(n / 16, count, hex_table);
	ft_putchar(hex_table[(n % 16)], count);
}

void	ft_putpnbr(long unsigned int n, int *count, char *hex_table)
{
	if (n == 0)
	{
		*count += write(1, "(nil)", 5);
		return ;
	}
	if (n < 16)
	{
		ft_putstr("0x", count);
		ft_putchar(hex_table[(n % 16)], count);
		return ;
	}
	ft_putpnbr(n / 16, count, hex_table);
	ft_putchar(hex_table[(n % 16)], count);
}
