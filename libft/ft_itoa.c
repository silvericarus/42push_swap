/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:48:03 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:30:11 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcount(long num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

/*
Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
*/
char	*ft_itoa(int n)
{
	int		i;
	int		j;
	long	nb;
	char	*result;

	nb = n;
	i = digitcount(nb);
	result = malloc(i + 1);
	if (!result)
		return (NULL);
	j = i;
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	i--;
	while (nb >= 10)
	{
		result[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	result[i] = nb + '0';
	result[j] = '\0';
	return (result);
}
