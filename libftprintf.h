/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:22:38 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/03 14:07:22 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putvoidp(void *p);
int	ft_putunbr(unsigned int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_printf(const char *format, ...);
int	ft_print_hex(unsigned long int c, const char *str);
int	ft_print_capital_hex(unsigned int c);
int	ft_print_small_hex(unsigned int c);

#endif