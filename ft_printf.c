/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:51:36 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/19 20:18:40 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putuint(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex(va_arg(va, unsigned int), counter, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar(*str, counter);
}

int	ft_printf(const char *str, ...)
{
	va_list		va;
	size_t		counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
