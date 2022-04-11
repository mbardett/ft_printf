/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:32:27 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 22:01:04 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_helper(unsigned int n, char c)
{
	int		length;
	int		reminder;
	char	symbol;

	length = 0;
	reminder = 0;
	reminder = n % 16;
	if (reminder < 10)
		symbol = reminder + '0';
	else
	{
		if (c == 'x')
			symbol = reminder - 10 + 'a';
		if (c == 'X')
			symbol = reminder - 10 + 'A';
	}
	if (n >= 16)
		length += ft_print_hex(n / 16, c);
	length += ft_printchar(symbol);
	return (length);
}

int	ft_print_hex(unsigned int n, char c)
{
	int	length;

	length = 0;
	if (n == 0)
		return (ft_printchar('0'));
	else
		length += ft_hex_helper(n, c);
	return (length);
}
