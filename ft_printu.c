/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:28:58 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 21:11:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	char	c;
	int		length;

	length = 0;
	if (n == 4294967295)
	{
		write (1, "4294967295", 10);
		return (10);
	}
	if (n >= 10)
		length += ft_printu(n / 10);
	c = (n % 10 + '0');
	length += ft_printchar(c);
	return (length);
}
