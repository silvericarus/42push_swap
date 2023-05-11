/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:26:15 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/20 18:31:35 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_u(unsigned int hex, int *arg_len, char *base)
{
	if (hex >= 16)
		ft_putnbr_base_u(hex / 16, arg_len, base);
	ft_putchar_arg(base[hex % 16], arg_len);
}

static int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_ul(unsigned long n, char *base, int *len)
{
	unsigned long	base_len;

	if (check_base(base))
	{
		base_len = 0;
		while (base[base_len])
			base_len++;
		if (n > base_len - 1)
		{
			ft_putnbr_base_ul(n / base_len, base, len);
			n %= base_len;
		}
		ft_putchar_arg(base[n], len);
	}
}

void	ft_putnbr_u_arg(unsigned int nb, int *arg_len)
{
	if (nb > 9)
	{
		ft_putnbr_arg(nb / 10, arg_len);
		nb %= 10;
	}
	ft_putchar_arg(nb + '0', arg_len);
}
