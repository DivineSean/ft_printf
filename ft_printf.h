/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: markik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:52:50 by markik            #+#    #+#             */
/*   Updated: 2022/11/22 03:07:09 by markik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_looking_for_type(va_list ap, char c, int print_return);
int	ft_putnbr_base(unsigned long nb, char *base, int print_return);
int	ft_putnbr(long nb, int print_return);
int	ft_putstring(char *str, int print_return);
int	ft_putchar(char c, int print_return);
int	ft_strlen(char *str);
int	ft_s(char *str, int print_return);
int	ft_p(void *add, int print_return);
int	ft_printf(const char *str1, ...);
#endif
