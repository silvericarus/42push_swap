/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:14:25 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 20:00:19 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función strncmp() compara las dos cadenas de caracteres s1 y s2, 
salvo que solamente compara los primeros n caracteres de s1.
VALOR DEVUELTO
Las funciones strcmp() y strncmp() devuelven un entero menor que, 
igual a, o mayor que cero si s1 (o los primeros n bytes en el segundo caso) 
se encuentra que es, respectivamente, menor que, igual a, o mayor que s2. 
*/
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
		{
			return (1);
		}
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
