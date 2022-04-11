/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:57:20 by mbardett          #+#    #+#             */
/*   Updated: 2022/04/11 21:08:53 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printu(unsigned int n);
int	ft_printstring(char *str);
int	ft_print_pointer(unsigned long ptr);
int	ft_printnumber(int n);
int	ft_print_hex(unsigned int n, char c);
int	ft_printchar(char c);

#endif
