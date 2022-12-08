/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_looking_for_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:55:48 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 01:56:59 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_u(unsigned int itr, int print_return)
{	
	print_return = ft_putnbr_base(itr, "0123456789", print_return);
	return (print_return);
}

static int	ft_both_x(char c, unsigned int eyy, int print_return)
{
	if (c == 'x')
	{
		print_return = ft_putnbr_base(eyy, \
				"0123456789abcdef", print_return);
		return (print_return);
	}
	if (c == 'X')
	{
		print_return = ft_putnbr_base(eyy, \
				"0123456789ABCDEF", print_return);
		return (print_return);
	}
	return (print_return);
}

int	ft_looking_for_type(va_list ap, char c, int print_return)
{
	if (c == 'c')
		print_return = ft_putchar(va_arg(ap, int), print_return);
	else if (c == 's')
	{
		print_return = ft_s(va_arg(ap, char *), print_return);
	}
	else if (c == 'p')
	{
		print_return = ft_p(va_arg(ap, void *), print_return);
	}
	else if (c == 'i' || c == 'd')
		print_return = ft_putnbr(va_arg(ap, int), print_return);
	else if (c == 'u')
		print_return = ft_u(va_arg(ap, unsigned int), print_return);
	else if (c == 'x' || c == 'X')
		print_return = ft_both_x(c, va_arg(ap, unsigned int), print_return);
	else if (c == '%')
		print_return = ft_putchar('%', print_return);
	else
		print_return = ft_putchar(va_arg(ap, int), print_return);
	return (print_return);
}
