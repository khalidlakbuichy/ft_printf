/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:32:05 by klakbuic          #+#    #+#             */
/*   Updated: 2023/12/20 09:37:04 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

void	ft_putchar(char c, int *count);
int		ft_isascii(int c);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putxnbr(unsigned int n, int *count, char *hex_table);
void	ft_putpnbr(long unsigned int n, int *count, char *hex_table);
int		ft_printf(const char *str, ...);
#endif