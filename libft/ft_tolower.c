/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:15:51 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 20:06:09 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Toma un caracter y lo devuelve en minúscula
*/
int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}
