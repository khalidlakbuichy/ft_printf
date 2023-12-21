/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:31:16 by klakbuic          #+#    #+#             */
/*   Updated: 2023/12/21 11:59:22 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_format(char format, int *printed, va_list arg)
{
	char	*hex_table;
	char	*hex_table_b;

	hex_table = "0123456789abcdef";
	hex_table_b = "0123456789ABCDEF";
	if (format == 'c')
		ft_putchar(va_arg(arg, int), printed);
	else if (format == 's')
		ft_putstr(va_arg(arg, char *), printed);
	else if (format == 'p')
		ft_putpnbr(va_arg(arg, unsigned long int), printed, hex_table);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(arg, int), printed);
	else if (format == 'u')
		ft_putunbr(va_arg(arg, int), printed);
	else if (format == 'x')
		ft_putxnbr(va_arg(arg, unsigned int), printed, hex_table);
	else if (format == 'X')
		ft_putxnbr(va_arg(arg, unsigned int), printed, hex_table_b);
	else if (format == '%' || ft_isascii(format))
		ft_putchar(format, printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		printed;
	int		i;

	printed = 0;
	i = 0;
	va_start(ap, str);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i++], &printed);
		else
		{
			if (str[i + 1] == '\0')
				break ;
			ft_format(str[++i], &printed, ap);
			i++;
		}
	}
	va_end(ap);
	return (printed);
}
