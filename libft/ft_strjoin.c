/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:12:44 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/09 18:40:21 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parámetros:
s1: La primera string.
s2: La string a añadir a ’s1’.
Valor devuelto :La nueva string.
NULL si falla la reserva de memoria.
Descripción Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		str[s1len] = s2[i];
		s1len++;
	}
	str[s1len] = '\0';
	return (str);
}
