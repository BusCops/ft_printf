/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:09:38 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/02 17:03:31 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	args_printer(const char *s, va_list args)
{
	int	c;
	
	c = 0;
	if(*format == 'c')
		c = ft_putchar(va_arg(args, int));	
	else if (*format == 's')
		c = ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		c = ft_putvoidp(va_arg(args, void *));
	else if (*format == 'd'|| *format == 'i')
		c = ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
	else if (*format == 'x')
	else if (*format == 'X')
	else if (*format == '%')
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		i;
	int		counter;
	
	if(!format)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			counter = counter + args_printer(++format, args);

		}
	}
}
