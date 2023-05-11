/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:32:22 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:49:11 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_strrchr() devuelve un puntero a la última 
ocurrencia del carácter c en la cadena s.
VALOR DEVUELTO
La funcion ft_strrchr() devuelve un puntero al elemento 
de la cadena con el carácter coincidente, o NULL si el 
carácter no se ha encontrado. 
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (str);
}

/*int main(void)
{
	char	str[] = "RymR1l0REK4";
	printf("%s",ft_strrchr(str,'a'));
}*/