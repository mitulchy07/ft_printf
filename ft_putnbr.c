/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:51:06 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/18 20:51:10 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr((num / 10), counter);
		ft_putchar('8', counter);
	}
	else if (num < 0)
	{
		ft_putchar('-', counter);
		ft_putnbr(-num, counter);
	}
	else
	{
		if (num > 9)
			ft_putnbr((num / 10), counter);
		ft_putchar(('0' + num % 10), counter);
	}
}
