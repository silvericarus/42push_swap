/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:44:58 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:58:03 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_strlen() calcula la longitud de la cadena 
de caracteres s, sin incluir el carácter terminador `\0'.
VALOR DEVUELTO
La función ft_strlen() devuelve el número de caracteres en s. 
*/
size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
