/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:29:05 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/12 15:36:27 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Parámetros:
s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Valor devuelto:
La string recortada.
NULL si falla la reserva de memoria.
Descripción:
Elimina todos los caracteres de la string ’set’
desde el principio de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
*/

char	*ft_strtrim_left(char const *s1, char const *set)
{
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) && ft_strchr("+-", *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(&s1[ft_strlen(s1) - 1]));
	str = ft_substr((char *)s1, 0, ft_strlen(s1) + 1);
	return (str);
}
