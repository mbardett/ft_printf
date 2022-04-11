/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:43:59 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 22:02:59 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_helper(uintptr_t n)
{
	int		length;
	int		reminder;
	char	symbol;

	reminder = 0;
	length = 0;
	reminder = n % 16;
	if (reminder < 10)
		symbol = reminder + '0';
	else
		symbol = reminder - 10 + 'a';
	if (n >= 16)
		length += pointer_helper(n / 16);
	length += ft_printchar(symbol);
	return (length);
}

int	ft_print_pointer(unsigned long ptr)
{
	int	length;

	write(1, "0x", 2);
	length = 2;
	if (ptr == 0)
		length += ft_printchar('0');
	else
		length += pointer_helper(ptr);
	return (length);
}
