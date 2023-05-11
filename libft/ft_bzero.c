/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:53:26 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:24:19 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función ft_bzero() pone a cero los primeros n bytes
del área de bytes que comienza en s.
*/
void	*ft_bzero(void *s, size_t n)
{
	char	*str;
	int		cont;

	str = s;
	cont = 0;
	while (cont < (int)n)
	{
		*str++ = 0;
		cont++;
	}
	return (s);
}
