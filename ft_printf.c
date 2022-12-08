/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:57:11 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 03:07:00 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str1, ...)
{
	va_list	ap;
	char	*str;
	int		i;
	int		print_return;

	va_start(ap, str1);
	if (!str1)
		return (-1);
	i = 0;
	print_return = 0;
	str = (char *)str1;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[++i])
				break ;
			print_return = ft_looking_for_type(ap, str[i], print_return);
		}
		else
			print_return = ft_putchar(str[i], print_return);
		i++;
	}
	va_end(ap);
	return (print_return);
}
