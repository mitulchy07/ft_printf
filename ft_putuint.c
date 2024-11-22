/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:50:50 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/19 20:01:44 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux(num, "0123456789");
	ft_putstr(str, counter);
	free(str);
}
