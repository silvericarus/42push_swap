/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:52 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 20:03:52 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strnstr function locates the first occurrence of the null-terminated 
string needle in the string haystack , where not more than len 
characters are searched. Characters that appear after a `\0' character 
are not searched.
VALOR DEVUELTO
If needle is an empty string, haystack is returned; 
if needle occurs nowhere in haystack , NULL is returned; 
otherwise a pointer to the first character of the first occurrence of 
needle is returned. 
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		c;
	size_t		size_n;

	i = 0;
	size_n = ft_strlen((char *)needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (size_n == 0 || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] != '\0' && needle[c] != '\0'
			&& haystack[i + c] == needle[c] && i + c < len)
		{
			c++;
			if (c == size_n)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
