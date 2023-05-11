/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:00:11 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:50:33 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_strdup() devuelve un puntero a una 
nueva cadena de caracteres que es un duplicado 
de la cadena apuntada por s. La memoria para la 
nueva cadena se obtiene automáticamente con malloc(3), y puede (y debe) 
liberarse con free(3).
VALOR DEVUELTO
La función ft_strdup() devuelve un puntero a la cadena duplicada, 
o NULL si no había bastante memoria. 
*/
char	*ft_strdup(const char *s1)
{
	size_t	size_str;
	int		cont;
	char	*s2;

	cont = 0;
	size_str = 0;
	while (s1[size_str])
		size_str++;
	s2 = malloc(sizeof(char) * (size_str + 1));
	if (!s2)
		return (NULL);
	cont = 0;
	while (s1[cont])
	{
		s2[cont] = s1[cont];
		cont++;
	}
	s2[cont] = '\0';
	return (s2);
}
