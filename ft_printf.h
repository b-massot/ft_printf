/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmassot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:03:06 by bmassot           #+#    #+#             */
/*   Updated: 2025/10/22 10:03:08 by bmassot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_format(va_list *args, const char spec);
int		ft_print_ptr(void *ptr);
int		ft_len_ptr(uintptr_t num);
int		ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
void	ft_put_ptr(uintptr_t ptr);
int		ft_print_str(char *str);
int		ft_print_chr(int c);
void	ft_putstr(char *str);
int		ft_print_num(int n);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_printf(const char *spec, ...);

#endif
