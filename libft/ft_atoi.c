/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:22:17 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:22:54 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_atoi() convierte la porción inicial de la cadena 
apuntada por str a int.
Valor devuelto
El valor convertido
*/
int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	num;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if (num * neg > 2147483647)
			return (-1);
		else if (num * neg < -2147483648)
			return (0);
		else
			num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
