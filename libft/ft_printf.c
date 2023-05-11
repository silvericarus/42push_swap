/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:07:49 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/19 13:03:49 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	return_format(char const *str, va_list args, int *arg_len, int i)
{
	char	c;

	if (str[i] == 'c')
	{
		c = va_arg(args, int);
		ft_putchar_arg(c, arg_len);
	}
	if (str[i] == 's')
		ft_print_str(args, arg_len);
	if (str[i] == 'p')
		ft_printptr(args, arg_len);
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
		ft_printint_arg(args, arg_len, str[i]);
	if (str[i] == 'x' || str[i] == 'X')
		ft_puthex(args, arg_len, str[i]);
	if (str[i] == '%')
		*arg_len += write(1, "%", 1);
}

int	ft_printf(char const *idn, ...)
{
	int		index;
	va_list	args;
	int		len;
	int		*arg_len;

	va_start(args, idn);
	index = 0;
	len = 0;
	arg_len = &len;
	while (idn[index])
	{
		if (idn[index] == '%')
		{
			index++;
			return_format(idn, args, arg_len, index);
		}
		else
			len += write(1, &idn[index], 1);
		index++;
	}
	va_end(args);
	return (len);
}
