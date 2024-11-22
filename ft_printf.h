/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:59:43 by hchowdhu          #+#    #+#             */
/*   Updated: 2024/11/19 20:25:34 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *str, ...);

void	ft_putchar(char c, size_t *counter);
void	ft_putstr(char *str, size_t *counter);
void	ft_putnbr(int num, size_t *counter);
void	ft_putuint(unsigned int num, size_t *counter);
void	ft_puthex(unsigned int num, size_t *counter, char *base);
void	ft_putptr(void *ptr, size_t *counter);
char	*ft_aux(unsigned long long n, char *base);

#endif
