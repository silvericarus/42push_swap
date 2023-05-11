/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:32:22 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:47:58 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_strchr() devuelve un puntero a la primera 
ocurrencia del carácter c en la cadena de caracteres s.
VALOR DEVUELTO
La función ft_strchr() devuelve un puntero al elemento 
de la cadena con el carácter coincidente, o NULL si 
el carácter no se ha encontrado. 
*/
char	*ft_strchr(const char *s, int c)
{
	int		cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			return (&((char *)s)[cont]);
		cont++;
	}
	if ((char)c == 0)
		return (&((char *)s)[cont]);
	return (NULL);
}
