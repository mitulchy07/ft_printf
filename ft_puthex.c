/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:51:20 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/18 20:51:25 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_aux(num, base);
	ft_putstr(str, counter);
	free(str);
}
