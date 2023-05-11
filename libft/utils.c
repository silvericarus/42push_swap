/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:46:05 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/20 18:01:00 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(va_list args, int *arg_len)
{
	unsigned long	ptr;

	ptr = va_arg(args, unsigned long);
	ft_putstr_arg("0x", arg_len);
	if (ptr == 0)
		ft_putstr_arg("0", arg_len);
	else
		ft_putnbr_base_ul(ptr, "0123456789abcdef", arg_len);
}

void	ft_printint_arg(va_list args, int *arg_len, const char flag)
{
	int				i;
	unsigned int	u;

	if (flag == 'u')
	{
		u = va_arg(args, unsigned int);
		ft_putnbr_u_arg(u, arg_len);
	}
	else
	{
		i = va_arg(args, int);
		ft_putnbr_arg(i, arg_len);
	}
}

void	ft_printstr_arg(va_list args, int *arg_len)
{
	char	*str;
	int		i;

	str = va_arg(args, char *);
	i = 0;
	while (str[i])
	{
		ft_putchar_arg(str[i], arg_len);
		i++;
	}
}

void	ft_printchar_arg(char c, int *arg_len)
{
	*arg_len += write(1, &c, 1);
}

void	ft_print_str(va_list args, int *arg_len)
{
	char	*str;

	str = va_arg(args, char *);
	if (str)
		ft_putstr_arg(str, arg_len);
	else
		ft_putstr_arg("(null)", arg_len);
}
