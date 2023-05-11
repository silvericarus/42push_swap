/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:02:12 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/20 18:34:58 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(char const *idn, ...);
void	ft_print_str(va_list args, int *arg_len);
void	ft_printint_arg(va_list args, int *arg_len, const char flag);
void	ft_printstr_arg(va_list args, int *arg_len);
void	ft_puthex(va_list args, int *arg_len, const char flag);
void	ft_printptr(va_list args, int *arg_len);

void	ft_putnbr_arg(int n, int *arg_len);
void	ft_putstr_arg(char *str, int *arg_len);
void	ft_putchar_arg(char c, int *arg_len);
void	ft_putnbr_base_ul(unsigned long n, char *base, int *len);
void	ft_putnbr_base_u(unsigned int hex, int *arg_len, char *base);
void	ft_putnbr_u_arg(unsigned int nb, int *arg_len);

#endif