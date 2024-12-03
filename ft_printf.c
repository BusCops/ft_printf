/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:09:38 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/03 14:06:55 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	args_printer(const char *format, va_list args)
{
	int	c;

	c = 0;
	if (*format == 'c')
		c = ft_putchar(va_arg(args, int));
	else if (*format == 's')
		c = ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		c = ft_putvoidp(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		c = ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		c = ft_putunbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		c = ft_print_small_hex(va_arg(args, unsigned int));
	else if (*format == 'X')
		c = ft_print_capital_hex(va_arg(args, unsigned int));
	else if (*format == '%')
		c = ft_putchar('%');
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			counter = counter + args_printer(++format, args);
		}
		else
			counter = counter + ft_putchar(*format);
		format++;
	}
	return (counter);
}
