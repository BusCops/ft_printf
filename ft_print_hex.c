/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:53:34 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/03 14:06:46 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex(unsigned long int c, const char *str)
{
	int		i;

	i = 0;
	if (c >= 16)
	{
		i = i + ft_print_hex(c / 16, str);
		i = i + ft_print_hex(c % 16, str);
	}
	else
	{
		write(1, &str[c], 1);
		i = i + 1;
	}
	return (i);
}

int	ft_print_capital_hex(unsigned int c)
{
	return (ft_print_hex(c, "0123456789ABCDEF"));
}

int	ft_print_small_hex(unsigned int c)
{
	return (ft_print_hex(c, "0123456789abcdef"));
}
