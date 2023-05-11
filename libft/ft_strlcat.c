/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:32:02 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:56:37 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strlcpy() and strlcat() functions copy and concatenate strings 
respectively. They are designed to be safer, more consistent, 
and less error prone replacements for strncpy(3) and strncat(3). 
Unlike those functions, strlcpy() and strlcat() 
take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is 
larger than 0 or, in the case of strlcat(), as long as there is at 
least one byte free in dst). Note that a byte for the NUL should 
be included in size. Also note that strlcpy() and strlcat() only 
operate on true ''C'' strings. This means that for strlcpy() src 
must be NUL-terminated and for strlcat() both src and dst must be 
NUL-terminated
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (dstsize < i)
	{
		while (src[j])
			j++;
		return (dstsize + j);
	}
	while (src[j] && dstsize > 0 && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
