/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:43:17 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/19 19:10:26 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	if (ptr == NULL)
	{
		ft_putstr ("(nil)", counter);
		return ;
	}
	ptr_address = (unsigned long)ptr;
	ft_putstr ("0x", counter);
	str = ft_aux (ptr_address, HEX_LOW_BASE);
	ft_putstr (str, counter);
	free(str);
}
