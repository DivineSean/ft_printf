/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:52:30 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 00:52:31 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *str, int print_return)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_return = ft_putchar(str[i], print_return);
		i++;
	}
	return (print_return);
}
