/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:53:26 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:42:03 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_memset() rellena los primeros n bytes 
del área de memoria apuntada por s con el byte constante c.
VALOR DEVUELTO
La función ft_memset() devuelve un puntero al área de memoria s. 
*/
void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while ((int)n-- > 0)
	{
		*str++ = c;
	}
	return (s);
}
