/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:10:26 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/09 18:23:23 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
calloc() asigna memoria para una matriz de count elementos 
de size bytes cada uno y devuelve un puntero a la memoria asignada. 
La memoria es puesta a cero.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*mempos;

	if (size && ((size_t)(-1) / size) < count)
		return (0);
	mempos = malloc(count * size);
	if (mempos)
		ft_bzero(mempos, size * count);
	return (mempos);
}
