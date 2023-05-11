/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:35:33 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 20:21:25 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_memchr() rastrea los primeros n bytes del área de memoria 
apuntada por s buscando el carácter c. La operación acaba al 
llegarse al primer byte que concuerde con c 
(interpretado como un carácter sin signo).
VALOR DEVUELTO
La funcion ft_memchr() devuelve un puntero 
al byte que concuerda, o NULL si el carácter no está en el 
área de memoria especificada.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*str;
	unsigned char	character;

	cont = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	if (n < 1)
		return (NULL);
	while (cont < n)
	{
		if (*str == character)
			return (str);
		str++;
		cont++;
	}
	return (NULL);
}
