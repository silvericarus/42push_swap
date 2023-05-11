/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:53:50 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:41:03 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_memmove() copia n bytes 
del área de memoria src al área de memoria dest. 
Las áreas de memoria pueden solaparse.
VALOR DEVUELTO
La función ft_memmove() devuelve un puntero a dest. 
*/
void	*ft_memmove(void *dst, const void *src, size_t length)
{
	char	*dest;
	char	*source;

	dest = dst;
	source = (void *)src;
	if (dest > source)
	{
		while (length--)
		{
			dest[length] = source[length];
		}
	}
	else if (dest < source)
	{
		ft_memcpy(dst, src, length);
	}
	return (dst);
}
