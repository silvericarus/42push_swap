/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:52:03 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:40:04 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La funcion ft_memcpy() copia n bytes desde el area de memoria src 
al area dest. Dichas areas de memoria no deben tener ningun 
punto de interseccion; en tal caso utilizar la funcion ft_memmove(3) 
en lugar de ft_memcpy().
VALOR DEVUELTO
La funcion ft_memcpy() devuelve un puntero a dest. 
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			cont;
	char		*str_dest;
	const char	*str_src;

	cont = 0;
	str_dest = dest;
	str_src = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (cont < (int)n)
	{
		str_dest[cont] = str_src[cont];
		cont++;
	}
	return (str_dest);
}
/*int	main(void)
{
	char	*str1 = NULL;
	char	*str2 = NULL;

	printf("%s", ft_memcpy(str2, str1, 2));
}*/
