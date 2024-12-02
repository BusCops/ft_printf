/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:41:42 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/02 17:06:31 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11), 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		i = i + ft_putnbr(-n);
		i++;
	}
	else if (n > 9)
	{
		i = i + ft_putnbr(n / 10);
		i = i + ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
		i++;
	}
	return (i);
}
