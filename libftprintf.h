/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:44:58 by abenzaho          #+#    #+#             */
/*   Updated: 2024/12/03 10:50:49 by abenzaho         ###   ########.fr       */
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
int	ft_print_capital_hex(unsigned long int c);
int	ft_print_small_hex(unsigned long int c);

#endif