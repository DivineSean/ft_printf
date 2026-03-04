/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:04:08 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 01:21:00 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s(char *str, int print_return)
{
	if (str == NULL)
		print_return = ft_putstring("(null)", print_return);
	else if (*str == '\0')
		print_return = ft_putstring("", print_return);
	else
		print_return = ft_putstring(str, print_return);
	return (print_return);
}
