/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:11:37 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 22:05:13 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length = ft_printchar(va_arg(args, int));
	else if (c == 's')
		length = ft_printstring(va_arg(args, char *));
	else if (c == 'p')
		length = ft_print_pointer(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		length = ft_printnumber(va_arg(args, int));
	else if (c == 'u')
		length = ft_printu(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		length = ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		length += ft_printchar(c);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			length += ft_type(args, str[i + 1]);
			i += 2;
		}	
		else
		{
			length += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
