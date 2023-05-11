/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:15:51 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 20:06:28 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Toma un caracter y lo devuelve en mayúscula
*/
int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
