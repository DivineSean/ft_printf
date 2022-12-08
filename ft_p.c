/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:26:36 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 01:37:41 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(void *add, int print_return)
{
	print_return = ft_putstring("0x", print_return);
	print_return = ft_putnbr_base((unsigned long)add, \
			"0123456789abcdef", print_return);
	return (print_return);
}
