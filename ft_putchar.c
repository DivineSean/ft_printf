/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:48:49 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 00:50:31 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int print_return)
{
	if (write(1, 0, 0))
		return (-1);
	write(1, &c, 1);
	print_return++;
	return (print_return);
}
