/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:12:59 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/20 18:29:09 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(va_list args, int *arg_len, const char flag)
{
	unsigned long	hex;

	hex = va_arg(args, unsigned long);
	if (flag == 'x')
		ft_putnbr_base_u(hex, arg_len, "0123456789abcdef");
	else
		ft_putnbr_base_u(hex, arg_len, "0123456789ABCDEF");
}

void	ft_printu(va_list args, int *arg_len)
{
	unsigned int	i;

	i = va_arg(args, unsigned int);
	ft_putnbr_u_arg(i, arg_len);
}

void	ft_putchar_arg(char c, int *arg_len)
{
	*arg_len += write (1, &c, 1);
}

void	ft_putnbr_arg(int nb, int *arg_len)
{
	if (nb == -2147483648)
	{
		ft_putstr_arg("-2147483648", arg_len);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar_arg('-', arg_len);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr_arg(nb / 10, arg_len);
		}
		ft_putchar_arg((nb % 10) + '0', arg_len);
	}
}

void	ft_putstr_arg(char *s, int *arg_len)
{
	while (*s != '\0')
	{
		ft_putchar_arg(*s, arg_len);
		s++;
	}
}
