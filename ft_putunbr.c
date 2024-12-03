/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:51:13 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/03 11:26:54 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr(unsigned int c)
{
	int		i;
	char	n;

	i = 0;
	if (c > 9)
	{
		i = i + ft_putunbr(c / 10);
		i = i + ft_putunbr(c % 10);
	}
	else
	{
		n = c + '0';
		write(1, &n, 1);
		i++;
	}
	return (i);
}
