/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:46:22 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:38:36 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La funcion ft_memcmp() compara los primeros n bytes 
de las areas de memoria s1 y s2. Devuelve un entero menor, 
igual a o mayor que cero si s1 es, respectivamente, 
menor, igual o mayor que s2.
VALOR DEVUELTO
La funcion ft_memcmp() devuelve un entero menor, 
igual o mayor que cero si s1 es, respectivamente, menor, 
igual o mayor que s2. 
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			count;
	const char	*str1;
	const char	*str2;

	count = 0;
	str1 = s1;
	str2 = s2;
	while (count < (int)n)
	{
		if (str1[count] != str2[count])
		{
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		}
		count++;
	}
	return (0);
}
/*#include <string.h>
int	main(void)
{
	char	str1[2] = "a";
	char	str2[2] = "a";
	char	str3[2] = "r";

	printf("%d\n",ft_memcmp(str1,str2,2));
	printf("%d\n",memcmp(str1,str3,2));
	printf("%d\n",ft_memcmp(str1,str3,2));
}*/