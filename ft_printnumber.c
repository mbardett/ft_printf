/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:04:41 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 21:58:59 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnumber(int n)
{
	char	c;
	int		length;

	length = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		length += ft_printchar('-');
		n *= -1;
	}
	if (n >= 10)
		length += ft_printnumber(n / 10);
	c = n % 10 + '0';
	length += ft_printchar(c);
	return (length);
}
