/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:20:03 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/30 14:31:04 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_formats(va_list args, const char format);
int	ft_printf(const char *str, ...);

int	print_single_char(int c);
int	print_multiple_chars(char *str);
int	print_pointer(unsigned long long pointer);
int	print_numbers(int nb);

int	print_unsigned_numbers(unsigned int nb);
int	print_hexa_min(unsigned long long nb);
int	print_hexa_maj(unsigned int nb);
int	print_percent(void);

#	endif
