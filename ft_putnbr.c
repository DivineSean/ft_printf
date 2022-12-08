/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:53:50 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 03:02:39 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb, int print_return)
{
	if (nb == -2147483648)
	{
		print_return = ft_putstring("-2147483648", print_return);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		print_return++;
		print_return = ft_putnbr(-nb, print_return);
	}
	else if (nb >= 10)
	{
		print_return = ft_putnbr(nb / 10, print_return);
		print_return = ft_putchar(48 + nb % 10, print_return);
	}
	else
		print_return = ft_putchar(48 + nb, print_return);
	return (print_return);
}
