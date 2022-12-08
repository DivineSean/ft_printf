/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:54:11 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 00:55:27 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nb, char *base, int print_return)
{
	unsigned long	len;
	unsigned long	i;

	i = 0;
	len = ft_strlen(base);
	if (nb < 0)
	{
		print_return = ft_putchar('-', print_return);
		nb = -nb;
		print_return = ft_putnbr_base(nb, base, print_return);
	}
	else if (nb >= len)
	{
		print_return = ft_putnbr_base(nb / len, base, print_return);
		print_return = ft_putnbr_base(nb % len, base, print_return);
	}
	else if (nb < len)
		print_return = ft_putchar(base[nb], print_return);
	return (print_return);
}
